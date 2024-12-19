#include "Moderno.h"
#include <iostream>

// Agregar palabra al mapa
void Moderno::agregarPalabra(const std::string& palabra) {
    ++palabras[palabra]; // Incrementar el contador de la palabra
}

// Mostrar palabras y sus conteos
void Moderno::mostrarConteo() const {
    for (const auto& entrada : palabras) {
        std::cout << entrada.first << ": " << entrada.second << std::endl;
    }
}
