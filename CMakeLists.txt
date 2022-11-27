cmake_minimum_required(VERSION 3.14)

option(CHECK_DOXYGEN "enable doc generation" ON)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(mvc VERSION ${PROJECT_VESRION})

configure_file(version.h.in version.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (${CHECK_DOXYGEN} STREQUAL ON)
    find_package(Doxygen)
    if (DOXYGEN_FOUND)
        set(DOXYFILE ${CMAKE_SOURCE_DIR}/Doxyfile)
        add_custom_target(doc_doxygen ALL
            COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYFILE}
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            COMMENT "Generating API documentation with Doxygen")
        unset(DOXYFILE)
    endif()
endif()

add_executable(mvc
  Io.h
  Io.cxx
  main.cxx
)

add_subdirectory(Model)
add_subdirectory(View)
add_subdirectory(Controller)

target_link_libraries(mvc
  PRIVATE model
  PRIVATE view
  PRIVATE controller
)

target_link_libraries(view
  PRIVATE controller)

target_link_libraries(controller
  PRIVATE model)

target_include_directories(mvc
  PRIVATE ${CMAKE_BINARY_DIR})

if(MSVC)
    target_compile_options(mvc PRIVATE
        /W4
    )
else()
    target_compile_options(mvc PRIVATE
        -Werror -Wall -Wimplicit-fallthrough -pedantic-errors
    )
endif()

install(TARGETS mvc RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)
