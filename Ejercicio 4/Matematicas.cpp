#include "Matematicas.h"
#include <iostream>

// Calcular la raíz cuadrada de un número
double Matematicas::calcularRaiz(double numero) {
    return std::sqrt(numero);
}

// Elevar un número a una potencia
double Matematicas::potencia(double base, int exponente) {
    return std::pow(base, exponente);
}
