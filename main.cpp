#include "Ejercicio 1/Vector.h"
#include "Ejercicio 2/List.h"
#include "Ejercicio 3/Algoritmo.h"
#include "Ejercicio 4/Matematicas.h"
#include "Ejercicio 5/Moderno.h"
#include "Ejercicio 6/Boost.h"
#include <iostream>
#include <vector>

int main() {
    // Ejercicio 1 - Vector
    std::vector<int> vec = {3, 1, 4, 1};
    Vector::ordenar(vec);
    std::cout << "Máximo: " << Vector::maximo(vec) << std::endl;

    // Ejercicio 2 - List
    List lista;
    lista.insertar(5.5);
    lista.insertar(6.6);
    lista.mostrar();

    // Ejercicio 3 - Algoritmo
    std::vector<int> numeros = {10, 2, 8, 6};
    Algoritmo::ordenar(numeros);
    std::cout << "Máximo: " << Algoritmo::buscarMaximo(numeros) << std::endl;

    // Ejercicio 4 - Matematicas
    std::cout << "Raíz de 16: " << Matematicas::calcularRaiz(16) << std::endl;
    std::cout << "2^3: " << Matematicas::potencia(2, 3) << std::endl;

    // Ejercicio 5 - Moderno
    Moderno mapa;
    mapa.agregarPalabra("hola");
    mapa.agregarPalabra("mundo");
    mapa.mostrarConteo();

    // Ejercicio 6 - Boost
    Boost conjunto;
    conjunto.agregar(10);
    conjunto.agregar(20);
    conjunto.eliminar(10);
    conjunto.mostrar();

    return 0;
}
