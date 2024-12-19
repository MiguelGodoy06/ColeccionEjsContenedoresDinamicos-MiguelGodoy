#ifndef LIST_H
#define LIST_H

#include <list>

// Clase para manejar una lista de números flotantes
class List {
public:
    List(); // Constructor
    void insertar(float numero); // Agrega un número a la lista
    void mostrar() const; // Muestra los elementos de la lista

private:
    std::list<float> numeros; // Lista de números flotantes
};

#endif // LIST_H
