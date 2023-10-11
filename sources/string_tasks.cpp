// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
  if (name.length() % 2 == 0) return true;
  return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
  if (name_one.length() > name_two.length()) return true;
  return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
  int len_1 = name_one.length();
  int len_2 = name_two.length();
  int len_3 = name_three.length();
  if (len_1 > len_2) {
    if (len_3 > len_1) {
      the_longest = name_three;
      the_shortest = name_two;
    } else {
      the_longest = name_one;
      if (len_2 > len_3)
        the_shortest = name_three;
      else
        the_shortest = name_two;
    }
  } else {
    if (len_3 > len_2) {
      the_longest = name_three;
      the_shortest = name_one;
    } else {
      the_longest = name_two;
      if (len_1 > len_3)
        the_shortest = name_three;
      else
        the_shortest = name_one;
    }
  }
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
  std::string word_new = "";
  for (int i = m; i <= n && i < int(word.length()); ++i) word_new += word[i];
  return std::string(word_new);
}

// Task 9.
void add_stars(std::string& word) {
  int len_word = word.length();
  std::string stars(len_word, '*');
  word = stars + word + stars;
}

// Task 10.
int percent_of_a(const std::string& word) {
  int num_a = 0;
  unsigned int len_word = word.length();
  for (size_t i; i < len_word; ++i)
    if (word[i] == 'a') num_a += 1;
  return num_a * 100 / len_word;
}

// Task 11.
std::string replace_can(const std::string& new_word) {
  std::string sentence = "Can you can a can as a canner can can a can?";
  int checker = 0;
  char letter;
  std::string new_sentence = "";
  for (size_t i = 0; i < sentence.length() - 2; ++i) {
    if (checker > 0)
      checker -= 1;
    else {
      letter = sentence[i];
      if (letter == 'c' && sentence[i + 1] == 'a' && sentence[i + 2]) {
        new_sentence += new_word;
        checker = 2;
      } else
        new_sentence += letter;
    }
  }
  new_sentence += '?';
  return new_sentence;
}
