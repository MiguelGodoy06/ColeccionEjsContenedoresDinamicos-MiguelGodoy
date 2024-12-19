#ifndef VECTOR_H
#define VECTOR_H

#include <vector>

// Clase para manejar operaciones con vectores
class Vector {
public:
    static void ordenar(std::vector<int>& vec); // Ordena un vector
    static int maximo(const std::vector<int>& vec); // Encuentra el valor máximo
};

#endif // VECTOR_H
