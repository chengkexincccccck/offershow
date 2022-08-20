cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g ")
project(GetOffer)

aux_source_directory(. ALL_SRCS)    #添加当前目录下所有源文件

add_subdirectory(chapter2)
add_subdirectory(Utilities)

add_executable(main ${ALL_SRCS})    #指定要生成的目标

target_link_libraries(main chapter_2)   #添加链接库，chapter_2是在chapter2子目录中的CMakeLists中定义的
target_link_libraries(main utilities)
