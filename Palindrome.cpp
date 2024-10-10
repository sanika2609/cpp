#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string cleaned;
    
    // Remove non-alphanumeric characters and convert to lowercase
    for (char c : str) {
        if (std::isalnum(c)) {
            cleaned += std::tolower(c);
        }
    }

    // Check if the cleaned string is a palindrome
    std::string reversed = cleaned;
    std::reverse(reversed.begin(), reversed.end());
    
    return cleaned == reversed;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
