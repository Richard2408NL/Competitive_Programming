#include <iostream>
#include <vector>
#include <unordered_map>

char find_replaced_letter(const std::vector<std::vector<char>>& latin_square) {
    std::unordered_map<char, int> count;

    // Count occurrences of each letter
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            char current_char = latin_square[i][j];
            if (current_char != '?') {
                count[current_char]++;
            }
        }
    }

    // Find the letter with only one occurrence
    for (const auto& entry : count) {
        if (entry.second == 1) {
            return entry.first;
        }
    }

    return '?';  // Should not reach here if input is valid
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::vector<std::vector<char>> latin_square(3, std::vector<char>(3));

        // Input Latin square
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cin >> latin_square[i][j];
            }
        }

        // Output the result
        std::cout << find_replaced_letter(latin_square) << std::endl;
    }

    return 0;
}
