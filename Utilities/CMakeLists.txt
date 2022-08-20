cmake_minimum_required(VERSION 2.8)

aux_source_directory(. utility_src)

add_library(utilities ${utility_src})