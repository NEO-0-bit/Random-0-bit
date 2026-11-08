#include <iostream>
#include <cmath>   // Required for std::fmod
#include <limits>  // Required to clear the input buffer

// Clears the input stream buffer if a user types invalid characters
void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    std::cout << "====================================\n";
    std::cout << "    ADVANCED C++ SYSTEM CALCULATOR  \n";
    std::cout << "====================================\n";

    while (true) {
        std::cout << "\nChoose an operation (+, -, *, /, %, or 'q' to quit): ";
        char op{'0'};
        std::cin >> op;

        // Check for exit condition first
        if (op == 'q' || op == 'Q') {
            std::cout << "Exiting calculator. Goodbye!\n";
            break;
        }

        // Validate operator selection before asking for numerical values
        if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
            std::cout << "Error! Invalid operator choice. Try again.\n";
            clearInputBuffer();
            continue;
        }

        // Secure evaluation for the first number
        double num1{};
        std::cout << "Enter first number: ";
        if (!(std::cin >> num1)) {
            std::cout << "Error! Invalid numeric format.\n";
            clearInputBuffer();
            continue;
        }

        // Secure evaluation for the second number
        double num2{};
        std::cout << "Enter second number: ";
        if (!(std::cin >> num2)) {
            std::cout << "Error! Invalid numeric format.\n";
            clearInputBuffer();
            continue;
        }

        // Mathematical execution engine
        switch (op) {
            case '+':
                std::cout << "RESULT = " << num1 + num2 << "\n";
                break;

            case '-':
                std::cout << "RESULT = " << num1 - num2 << "\n";
                break;

            case '*':
                std::cout << "RESULT = " << num1 * num2 << "\n";
                break;

            case '/':
                if (num2 == 0.0) {
                    std::cout << "Math Error! Division by zero is undefined.\n";
                } else {
                    std::cout << "RESULT = " << num1 / num2 << "\n";
                }
                break;

            case '%':
                if (num2 == 0.0) {
                    std::cout << "Math Error! Modulo by zero is undefined.\n";
                } else {
                    // Safe decimal modulo computation replacing traditional integer truncation
                    std::cout << "RESULT (Remainder) = " << std::fmod(num1, num2) << "\n";
                }
                break;
        }
    }

    return 0;
}
