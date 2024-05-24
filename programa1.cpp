#include <iostream>
#include <vector>

int multiply(int a, int b) {
    return a * b;
}

int calculateFactorial(int n) {
    if (n <= 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result = multiply(result, i);
    }
    return result;
}

int main() {
    int number;

    std::cout << "Entre um número: ";
    std::cin >> number;

    int factorial = calculateFactorial(number);

    std::cout << "O fatorial de " << number << " é " << factorial << std::endl;


    return 0;
}

