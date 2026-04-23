#include "maximal_rectangle.h"
#include <iostream>
#include <algorithm>

int MaximalRectangleSolucion::maximalRectangle(std::vector<std::vector<char>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return 0;

    int n = matrix.size();
    int m = matrix[0].size();
    
    std::vector<int> heights(m, 0);
    int max_area = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == '1') {
                heights[j]++; 
            } else {
                heights[j] = 0; 
            }
        }

        std::cout << "Histograma acumulado en la fila " << i << ": [ ";
        for (int h : heights) {
            std::cout << h << " ";
        }
        std::cout << "]" << std::endl;
    }

    return max_area;
}

int MaximalRectangleSolucion::largestRectangleArea(std::vector<int>& heights) {
    return 0; 
}