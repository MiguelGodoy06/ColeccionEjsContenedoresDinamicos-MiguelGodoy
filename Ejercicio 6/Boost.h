#ifndef BOOST_H
#define BOOST_H

#include <set>

// Clase para manejar operaciones con conjuntos
class Boost {
public:
    void agregar(int numero); // Agrega un número al conjunto
    void eliminar(int numero); // Elimina un número del conjunto
    void mostrar() const; // Muestra los elementos del conjunto

private:
    std::set<int> conjunto; // Conjunto de números enteros
};

#endif // BOOST_H
