// This C+ +Program checks if a given integer is odd or even.

#include <iostream>

int main()
{
    int number;
    std::cout << "For which number do you want to check if it is even or odd?: ";
    std::cin >> number;
    if (number % 2 == 0)
    {
        std::cout << "this number is even\n";
    }
    else
        std::cout << "this number is odd\n";
}