cmake_minimum_required(VERSION 3.0.0)
project(array VERSION 0.1.0)

include(CTest)
enable_testing()

set(Headers
    queue.h
)
set(Sources
queuearray.c
queueclient.c
)
add_library(array STATIC ${Sources} ${Headers})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(justice ${Sources})

