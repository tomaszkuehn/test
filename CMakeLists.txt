cmake_minimum_required(VERSION 3.10.0)
project(tk_test VERSION 0.1)

# *** VARIABLES ***

# targets
set(APP_TARGET tk_test)

# includes
set(APP_INCLUDES ${PROJECT_SOURCE_DIR}/inc/trace
                 ${PROJECT_SOURCE_DIR}/inc)


# sources
file(GLOB_RECURSE APP_SRCS src/*.c)

add_executable(${APP_TARGET} ${APP_SRCS})
target_include_directories(${APP_TARGET} PRIVATE ${APP_INCLUDES})
