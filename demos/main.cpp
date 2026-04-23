#include <iostream>
#include <vector>
#include "maximal_rectangle.h"

int main() {
    std::cout << "=================================================\n";
    std::cout << "   Prueba del Algoritmo: Maximal Rectangle\n";
    std::cout << "=================================================\n\n";


    std::vector<std::vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    std::cout << "Procesando matriz fila por fila...\n\n";
    
    MaximalRectangleSolucion s;
    int area_maxima = s.maximalRectangle(matrix);

    std::cout << "\n=================================================\n";
    std::cout << "AREA MAXIMA ENCONTRADA: " << area_maxima << "\n";
    std::cout << "=================================================\n";

    return 0;
}