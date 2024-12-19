#include "List.h"
#include <iostream>

// Constructor
List::List() {
    // Inicialización de lista vacía
}

// Agregar un número a la lista
void List::insertar(float numero) {
    numeros.push_back(numero); // Insertar número al final de la lista
}

// Mostrar todos los números de la lista
void List::mostrar() const {
    for (const auto& num : numeros) {
        std::cout << num << " "; // Imprimir cada número
    }
    std::cout << std::endl; // Fin de la línea
}
