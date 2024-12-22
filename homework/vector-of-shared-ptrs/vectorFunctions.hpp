#pragma once
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(const int count);
void print(const std::vector<std::shared_ptr<int>>& vector);
void add10(const std::vector<std::shared_ptr<int>>& vector);
void sub10(int* const ptr);
void sub10(const std::vector<std::shared_ptr<int>>& vector);
