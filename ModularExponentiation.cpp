//Written by Bryce Tuppurainen 2021 - Simple C++ Calculator for Modular Exponentiation
//Code for Workshop One SENG2250

#include <iostream>

int powmod(int& base, int& exponent, int& modulus);

int main()
{
    std::cout << "Written by Bryce Tuppurainen 2021 - Simple C++ Calculator for Modular Exponentiation" << std::endl;

    int base;
    std::cout << "Base $ ";
    std::cin >> base;

    int exponent;
    std::cout << "Exponent $ ";
    std::cin >> exponent;

    int modulus;
    std::cout << "Modulus $ ";
    std::cin >> modulus;

    powmod(base, exponent, modulus);

    return 0;
}

//
//Returns the modular exponentiation of base to the power of the given exponent iteratively
//
int powmod(int& base, int& exponent, int& modulus)
{
    std::cout << "Beginning powmod with base " << base << ", exponent " << exponent << ", modulus " << modulus << std::endl;

    if (modulus == 1)
    {
        std::cout << "Result: 0" << std::endl;
        return 0;
    }

    int result = 1;

    for (int i = 1; i <= exponent; i++) result = ((result * base) % modulus);

    std::cout << "Result: " << result << std::endl;
    return result;
}