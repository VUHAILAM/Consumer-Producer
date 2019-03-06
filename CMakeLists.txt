cmake_minimum_required(VERSION 3.0)
project(pro_and_con)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(
    pro_and_con 
    Producer.cpp
    Consumer.cpp
    main.cpp
)

