cmake_minimum_required(VERSION 3.29)
project(simasciitrain)

set(CMAKE_CXX_STANDARD 20)

add_executable(simasciitrain main.cpp
        TypeLocomotive.h
        TypeLocomotive.cpp
        ITrain.h
        Train.cpp
        AbstractLocomotive.h
        AbstractLocomotive.cpp
        TrainElement.h
        TrainElement.cpp
        ElectricLocomotive.h
        ElectricLocomotive.cpp
        GasolineLocomotive.h
        GasolineLocomotive.cpp
        Wagons.h
        Wagons.cpp
        AbstractWagon.h
        AbstractWagon.cpp
        TypeWagon.h
        TypeWagon.cpp
        FreightWagon.h
        FreightWagon.cpp
        PassengerWagon.h
        PassengerWagon.cpp
        UtilityWagon.h
        UtilityWagon.cpp)
