#include <iostream>
#include <vector>
#include <chrono>
#include "maximal_rectangle.h"
int main() {
    MaximalRectangleSolucion s;
    
    int n = 1000, m = 1000;
    std::vector<std::vector<char>> matriz_grande(n, std::vector<char>(m, '1'));

    std::cout << "Iniciando benchmark en matriz 1000x1000...\n";
    
    auto start = std::chrono::high_resolution_clock::now();
    s.maximalRectangle(matriz_grande);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Tiempo de ejecucion: " << elapsed.count() << " segundos.\n";

    return 0;
}