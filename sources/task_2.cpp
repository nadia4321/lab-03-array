// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
  int sum_num = 0;
  for (size_t i = 0; i < input.size(); ++i) sum_num += input[i];
  return sum_num;
}

int square_sum(const std::vector<int>& input) {
  int sum_num = 0;
  for (size_t i = 0; i < input.size(); ++i) sum_num += input[i] * input[i];
  return sum_num;
}

int sum_six(const std::vector<int>& input) {
  int sum_num = 0;
  for (size_t i = 0; i < 6; ++i) sum_num += input[i];
  return sum_num;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
  int sum_num = 0;
  for (int i = k1; i <= k2; ++i) sum_num += input[i];
  return sum_num;
}

int mean(const std::vector<int>& input) {
  int sum_num = 0;
  for (size_t i = 0; i < input.size(); ++i) sum_num += input[i];
  return sum_num / input.size();
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
  int sum_num = 0;
  for (int i = s1; i <= s2; ++i) sum_num += input[i];
  return sum_num / (s2 - s1 + 1);
}
