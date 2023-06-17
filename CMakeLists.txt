cmake_minimum_required(VERSION 3.23)
project(HubertSzelepustaKolokiwumC__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HubertSzelepustaKolokiwumC__
        figura.cpp
        figura.h
        main.cpp
        polaczenie.cpp
        polaczenie.h
        trojkat.cpp
        trojkat.h
        kwadrat.cpp
        kwadrat.h)
