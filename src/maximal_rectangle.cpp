#include "maximal_rectangle.h"
#include <iostream>
#include <algorithm>
#include <stack>

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
        max_area = std::max(max_area, largestRectangleArea(heights));
    }
    return max_area;
}

int MaximalRectangleSolucion::largestRectangleArea(std::vector<int>& heights) {
    std::stack<int> s; 
    int max_area = 0;
    int m = heights.size();

    for (int i = 0; i <= m; i++) {
        int current_height = (i == m) ? 0 : heights[i];

        while (!s.empty() && current_height < heights[s.top()]) {
            int height = heights[s.top()];
            s.pop();

            int width;
            if (s.empty()) {
                width = i; 
            } else {
                width = i - s.top() - 1; 
            }

            max_area = std::max(max_area, height * width);
        }

        s.push(i);
    }

    return max_area;
}