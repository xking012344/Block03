#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int number1;
    std::cout << "Enter a number: ";
    std::cin >> number1;
    int number2;
    std::cout << "Enter another number: ";
    std::cin >> number2;

    int sum = number1 + number2;
    int diff = number1 - number2;
    int mult = number1 * number2;
    int div = number1 / number2;

    if (number2 == 0) {

    }

    std::cout << "Your 2 numbers added together equals" << " "<< sum << std::endl;
    std::cout << "Your 2 numbers subtracted from each other equals" << " "<< diff << std::endl;
    std::cout << "Your 2 numbers multiplied together equals" << " "<< mult << std::endl;
    std::cout << "Your 2 numbers divided together equals" << " "<< div << std::endl;

    return 0;
}