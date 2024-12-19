#include "Algoritmo.h"
#include <algorithm>
#include <iostream>

// Ordenar un vector en orden ascendente
void Algoritmo::ordenar(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
}

// Encontrar el máximo de un vector
int Algoritmo::buscarMaximo(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}
