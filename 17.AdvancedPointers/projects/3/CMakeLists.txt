cmake_minimum_required(VERSION 3.0.0)
project(projekt LANGUAGES C VERSION 0.1.0)

include(CTest)
enable_testing()
set(Headers 
    readline.h
)
set(Sources
inventory2.c readline.c
)


add_library(projekt ${Sources} ${Headers})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(inventory ${Sources})
