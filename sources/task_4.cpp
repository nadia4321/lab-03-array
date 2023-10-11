// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
  for (size_t i = 0; i < input.size(); ++i) {
    if (input[i] < 0) {
      for (size_t j = i + 1; j < input.size(); ++j) {
        input[j - 1] = input[j];
      }
      input.pop_back();
      break;
    }
  }
}

void remove_last_even(std::vector<int>& input) {
  for (int i = input.size() - 1; i > -1; i -= 1) {
    if (input[i] % 2 == 0) {
      for (size_t j = i + 1; j < input.size(); ++j) {
        input[j - 1] = input[j];
      }
      input.pop_back();
      break;
    }
  }
}
