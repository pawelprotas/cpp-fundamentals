#include "vectorFunctions.hpp"

#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> result = {};
    for (int i = 0; i < count; i++) {
        std::shared_ptr<int> ptr = std::make_shared<int>(i);
        result.push_back(ptr);
    }
    return result;
}

void print(const std::vector<std::shared_ptr<int>> vector) {
    for (auto ptr : vector) {
        std::cout << *ptr << std::endl;
    }
    std::cout << std::endl;
}

void add10(std::vector<std::shared_ptr<int>> vector) {}

void sub10(int* const ptr) {}

void sub10(std::vector<std::shared_ptr<int>> vector) {}
