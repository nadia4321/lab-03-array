// Copyright 2018 Your Name<your_email>
#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
  int num;
  for (size_t i = 0; i < 3; ++i) {
    num = input[i];
    input[i] = input[17 + i];
    input[17 + i] = num;
  }
}
