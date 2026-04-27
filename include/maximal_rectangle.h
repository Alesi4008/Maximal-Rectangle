#ifndef MAXIMAL_RECTANGLE_H
#define MAXIMAL_RECTANGLE_H
#include <vector>
//Declaracion de la clase MaximalRectangleSolucion
class MaximalRectangleSolucion {
public:
//Declaracion del metodo maximalRectangle que recibe una matriz 2D devuelve el area maxima formada por '1's usando la funcion largestRectangleArea 
    int maximalRectangle(std::vector<std::vector<char>>& matrix);
private:
//Declaracion del metodo largestRectangleArea que recibe un vector de alturas y devuelve el area maxima del rectangulo formado por esas alturas
    int largestRectangleArea(std::vector<int>& heights);
};
#endif