#ifndef MAXIMAL_RECTANGLE_H
#define MAXIMAL_RECTANGLE_H

#include <vector>

class MaximalRectangleSolucion {
public:
    int maximalRectangle(std::vector<std::vector<char>>& matrix);

private:
    int largestRectangleArea(std::vector<int>& heights);
};

#endif