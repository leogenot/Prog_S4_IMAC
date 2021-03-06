cmake_minimum_required(VERSION 3.8)

project(Prog_c)

# Set the folder where the executables are created
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE})


# Create a target for each TP
function(setup_tp TP_NUMBER)
    set(TARGET_NAME ${TP_NUMBER}_exe)
    add_executable(${TARGET_NAME})
    target_compile_features(${TARGET_NAME} PRIVATE cxx_std_20)

    # Enable many good warnings
    if (MSVC)
        target_compile_options(${TARGET_NAME} PRIVATE /WX /W3)
    else()
        target_compile_options(${TARGET_NAME} PRIVATE -Werror -W -Wall -Wextra -Wpedantic -pedantic-errors)
    endif()
    
    # Add all the source and header files
    target_include_directories(${TARGET_NAME} PRIVATE ${TP_NUMBER})
    file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS ${TP_NUMBER}/*)
    target_sources(${TARGET_NAME} PRIVATE ${MY_SOURCES})

    # Add the p6 library
    add_subdirectory(p6)
    target_link_libraries(${TARGET_NAME} PRIVATE p6::p6) 


endfunction(setup_tp)

setup_tp(TP1)