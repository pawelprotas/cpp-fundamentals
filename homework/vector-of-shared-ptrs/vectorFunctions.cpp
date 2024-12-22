#include "vectorFunctions.hpp"

#include <iostream>

std::vector<std::shared_ptr<int>> generate(const int count) {
    std::vector<std::shared_ptr<int>> result = {};
    for (int i = 0; i < count; i++) {
        auto ptr = std::make_shared<int>(i);
        result.push_back(ptr);
    }
    return result;
}

void print(const std::vector<std::shared_ptr<int>>& vector) {
    for (const auto& ptr : vector) {
        std::cout << *ptr << std::endl;
    }
    std::cout << std::endl;
}

void add10(const std::vector<std::shared_ptr<int>>& vector) {
    for (const auto& ptr : vector) {
        if (ptr) {
            *ptr += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}

void sub10(const std::vector<std::shared_ptr<int>>& vector) {
    for (const auto& ptr : vector) {
        sub10(ptr.get());
    }
}
