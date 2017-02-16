//
// Created by Alex on 2/15/17.
//
#include <vector>

double getVectorSum(const std::vector<double> &vector) {
    double sum = 0;
    for (auto& n : vector){
        sum += n;
    }
    return sum;
}