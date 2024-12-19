#ifndef ALGORITMO_H
#define ALGORITMO_H

#include <vector>

// Clase que proporciona herramientas para trabajar con algoritmos básicos
class Algoritmo {
public:
    static void ordenar(std::vector<int>& vec); // Ordenar un vector
    static int buscarMaximo(const std::vector<int>& vec); // Encontrar el máximo de un vector
};

#endif // ALGORITMO_H
