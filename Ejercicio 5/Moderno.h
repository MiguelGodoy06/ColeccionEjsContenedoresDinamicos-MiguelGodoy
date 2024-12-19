#ifndef MODERNO_H
#define MODERNO_H

#include <map>
#include <string>

// Clase para manejar un mapa con conteo de palabras
class Moderno {
public:
    void agregarPalabra(const std::string& palabra); // Agregar palabra al mapa
    void mostrarConteo() const; // Mostrar palabras y sus conteos

private:
    std::map<std::string, int> palabras; // Mapa para contar palabras
};

#endif // MODERNO_H
