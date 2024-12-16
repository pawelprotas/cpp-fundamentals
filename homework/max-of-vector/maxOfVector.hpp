#pragma once
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    if (vec.empty()) {
        throw std::invalid_argument("Vector cannot be empty");
    }
    int result = vec[0];
    const size_t vectorSize = vec.size();
    for (int i = 1; i < vectorSize; i++) {
        if (vec[i] > result) {
            result = vec[i];
        }
    }
    return result;
}
