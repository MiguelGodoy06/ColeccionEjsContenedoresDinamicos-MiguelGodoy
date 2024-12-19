#include "Vector.h"
#include <algorithm>
#include <iostream>

// Ordenar un vector en orden ascendente
void Vector::ordenar(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
}

// Obtener el valor máximo del vector
int Vector::maximo(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}
