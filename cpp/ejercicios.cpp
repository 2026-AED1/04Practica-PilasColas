#include "ejercicios.hpp"
#include <queue>
#include <stack>
#include <stdexcept>
#include <iostream>

bool equilibrados(const std::string& texto) {
    // TODO
    throw std::logic_error("TODO equilibrados");
}

std::vector<std::string> procesar_turnos(const std::vector<std::pair<std::string, std::string>>& ordenes) {
    // TODO
    throw std::logic_error("TODO procesar_turnos");
}

void probar_ejercicios() {
    const std::vector<std::pair<std::string, bool>> casos_parentesis{
        {"", true}, {"texto sin simbolos", true}, {"a*(b+[c])", true},
        {"{[()]}", true}, {"([)]", false}, {"((", false},
        {"]", false}, {"(]", false}
    };
    for (const auto& [texto, esperado] : casos_parentesis) {
        if (equilibrados(texto) != esperado) {
            throw std::runtime_error("Fallo en equilibrados: " + texto);
        }
    }

    using Ordenes = std::vector<std::pair<std::string, std::string>>;
    using Respuestas = std::vector<std::string>;
    const std::vector<std::pair<Ordenes, Respuestas>> casos_turnos{
        {Ordenes{}, Respuestas{}},
        {Ordenes{{"siguiente", ""}, {"atiende", ""}},
         Respuestas{"VACIA", "VACIA"}},
        {Ordenes{{"llega", "Ana"}, {"llega", "Luis"},
                 {"siguiente", ""}, {"atiende", ""},
                 {"atiende", ""}, {"atiende", ""}},
         Respuestas{"Ana", "Ana", "Luis", "VACIA"}},
        {Ordenes{{"llega", "Ana"}, {"llega", "Luis"},
                 {"siguiente", ""}, {"llega", "Eva"},
                 {"atiende", ""}, {"siguiente", ""},
                 {"atiende", ""}, {"llega", "Paco"},
                 {"atiende", ""}, {"atiende", ""}, {"atiende", ""}},
         Respuestas{"Ana", "Ana", "Luis", "Luis", "Eva", "Paco", "VACIA"}}
    };
    for (const auto& [ordenes, esperado] : casos_turnos) {
        if (procesar_turnos(ordenes) != esperado) {
            throw std::runtime_error("Fallo en procesar_turnos");
        }
    }
    std::cout << "12 casos superados\n";
}

int main() {
    probar_ejercicios();
}
