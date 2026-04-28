#include "maximal_rectangle.h"
#include <iostream>
#include <algorithm>
#include <stack>
//Implementacion del metodo maximalRectangle 
int MaximalRectangleSolucion::maximalRectangle(std::vector<std::vector<char>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return 0;
    int n = matrix.size();
    int m = matrix[0].size();
    std::vector<int> alturas(m, 0);
    int area_max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == '1') {
                alturas[j]++; 
            } else {
                alturas[j] = 0; 
            }
        }
        std::cout << "Histograma acumulado en la fila " << i << ": [ ";
        for (int h : alturas) {
            std::cout << h << " ";
        }
        std::cout << "]" << std::endl;
        area_max = std::max(area_max, largestRectangleArea(alturas));
    }
    return area_max;
}
//Implementacion del metodo largestRectangleArea
int MaximalRectangleSolucion::largestRectangleArea(std::vector<int>& alturas) {
    std::stack<int> s; 
    int area_max = 0;
    int m = alturas.size();
    for (int i = 0; i <= m; i++) {
        int altura_actual;
        if (i == m) {
            altura_actual = 0;
        } else {
            altura_actual = alturas[i]; 
        }
        //INVARIANTE: La pila contiene indices de barras en orden creciente de altura 
        while (!s.empty() && altura_actual < alturas[s.top()]) {
            int altura = alturas[s.top()];
            s.pop();
            int ancho;
            if (s.empty()) {
                ancho = i; 
            } else {
                ancho = i - s.top() - 1; 
            }
            area_max = std::max(area_max, altura * ancho);
        }
        s.push(i);
    }
    return area_max;
}
