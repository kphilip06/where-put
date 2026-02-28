#include <iostream>
#include <string>
#include <limits>

#include "src/where.hpp"

int main() {
  char choice{};
  std::cout << "Are you looking for a character or a string? (c/s)" << std::endl;
  std::cin >> choice;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  if (choice == 'c')  {
    std::string input_string;
    char search_char{};

    std::cout << "Enter the string your want to search in." << std::endl;
    std::getline(std::cin, input_string);
    std::cout << "Enter the character you want to search for." << std::endl;
    std::cin >> search_char;

    int index = positionFind(input_string, search_char);
    std::cout << "Index: " << index << std::endl;
  } else if (choice == 's') {
    std::string input_string;
    std::string search_string;

    std::cout << "Enter the string your want to search in." << std::endl;
    std::getline(std::cin, input_string);
    std::cout << "Enter the string you want to search for." << std::endl;
    std::getline(std::cin, search_string);

    int index = positionFind(input_string, search_string);
    std::cout << "Index: " << index << std::endl;
  } else {
    std::cout << "Please enter 'c' or 's'." << std::endl;
  }

  return 0;
}
