cmake_minimum_required(VERSION 3.0.0)
project(list VERSION 0.1.0)

include(CTest)
enable_testing()
set(Sources
   queuelist.c
   queuelistclient.c

)
set (Headers
   queue.h
)
add_library(list ${Sources} ${Headers})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(please ${Sources})
