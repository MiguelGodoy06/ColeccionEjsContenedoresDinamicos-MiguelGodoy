#include "Boost.h"
#include <iostream>

// Agregar número al conjunto
void Boost::agregar(int numero) {
    conjunto.insert(numero);
}

// Eliminar número del conjunto
void Boost::eliminar(int numero) {
    conjunto.erase(numero);
}

// Mostrar elementos del conjunto
void Boost::mostrar() const {
    for (const auto& num : conjunto) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
