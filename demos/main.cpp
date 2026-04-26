#include <iostream>
#include <vector>
#include "maximal_rectangle.h"

int main() {
    std::cout << "=================================================\n";
    std::cout << "   Prueba del Algoritmo: Maximal Rectangle\n";
    std::cout << "=================================================\n\n";

    MaximalRectangleSolucion s;

    std::vector<std::vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    std::cout << "Procesando matriz estandar fila por fila...\n";
    int area_maxima = s.maximalRectangle(matrix);
    std::cout << "=================================================\n";
    std::cout << "AREA MAXIMA ENCONTRADA: " << area_maxima << "\n";
    std::cout << "=================================================\n\n";

    std::vector<std::vector<char>> matriz_ceros = {
        {'0','0'},
        {'0','0'}
    };

    std::cout << "Procesando matriz de puros ceros...\n";
    int area_ceros = s.maximalRectangle(matriz_ceros);
    std::cout << "=================================================\n";
    std::cout << "AREA MAXIMA ENCONTRADA: " << area_ceros << "\n";
    std::cout << "=================================================\n\n";

    std::vector<std::vector<char>> matriz_vacia = {};

    std::cout << "Procesando matriz vacia...\n";
    int area_vacia = s.maximalRectangle(matriz_vacia);
    std::cout << "=================================================\n";
    std::cout << "AREA MAXIMA ENCONTRADA: " << area_vacia << "\n";
    std::cout << "=================================================\n\n";

    std::vector<std::vector<char>> matriz_unos = {
        {'1','1','1'},
        {'1','1','1'}
    };

    std::cout << "Procesando matriz de puros unos...\n";
    int area_unos = s.maximalRectangle(matriz_unos);
    std::cout << "=================================================\n";
    std::cout << "AREA MAXIMA ENCONTRADA: " << area_unos << "\n";
    std::cout << "=================================================\n";

    return 0;
}