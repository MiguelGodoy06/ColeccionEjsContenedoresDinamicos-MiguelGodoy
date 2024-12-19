cmake_minimum_required(VERSION 3.29)

project(ColeccionEjsContenedoresDinamicos-MiguelGodoy)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(Ejercicio1 Ejercicio2 Ejercicio3 Ejercicio4 Ejercicio5 Ejercicio6)

find_package(Boost REQUIRED)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
else()
    message(FATAL_ERROR "Boost no encontrado. Instálalo antes de continuar.")
endif()

add_executable(ColeccionEjsContenedoresDinamicos-MiguelGodoy
        main.cpp
        "Ejercicio 1/Vector.cpp"
        "Ejercicio 2/List.cpp"
        "Ejercicio 3/Algoritmo.cpp"
        "Ejercicio 4/Matematicas.cpp"
        "Ejercicio 5/Moderno.cpp"
        "Ejercicio 6/Boost.cpp"

)

target_link_libraries(ColeccionEjsContenedoresDinamicos-MiguelGodoy ${Boost_LIBRARIES})
