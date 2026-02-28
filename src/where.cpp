#include <string>
#include <iostream>

// Finds a character in a string (returns index or -1)
int positionFind(std::string input_string, char search_char) {
    for (int i = 0; i < static_cast<int>(input_string.length()); i++) {
        if (input_string[i] == search_char) {
            return i;
        }
    }
    return -1;
}

// Finds a string inside a string (returns starting index or -1)
int positionFind(std::string input_string, std::string search_string) {
    if (search_string.length() == 0) {
        return 0;
    }
    if (search_string.length() > input_string.length()) {
        return -1;
    }

    for (int i = 0; i <= static_cast<int>(input_string.length() - search_string.length()); i++) {
        bool match = true;

        for (int j = 0; j < static_cast<int>(search_string.length()); j++) {
            if (input_string[i + j] != search_string[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return i;
        }
    }

    return -1;
}
