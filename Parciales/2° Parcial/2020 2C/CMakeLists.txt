cmake_minimum_required(VERSION 3.20)
project(2020_2C)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("2020 2C 2Parcial")

add_executable(2020_2C
        #"2020 2C 2Parcial/ej1.c"
       # "2020 2C 2Parcial/ej3.c"
        "2020 2C 2Parcial/ej5.c"

        "2020 2C 2Parcial/ejer1.png"
        "2020 2C 2Parcial/ejer2.png"
        "2020 2C 2Parcial/ejer3.png"
        "2020 2C 2Parcial/ejer4y5.png")
