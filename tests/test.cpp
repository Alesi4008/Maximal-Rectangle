#include <iostream>
#include <vector>
#include <cassert>
#include "maximal_rectangle.h" 

int main() {
    MaximalRectangleSolucion s; 

    std::vector<std::vector<char>> test1 = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };
    assert(s.maximalRectangle(test1) == 6);
    std::vector<std::vector<char>> test_vacia = {};
    assert(s.maximalRectangle(test_vacia) == 0);
    std::vector<std::vector<char>> test_uno = {{'1'}};
    assert(s.maximalRectangle(test_uno) == 1);
    std::cout << "Todos los tests pasaron exitosamente.\n";
    return 0;
}