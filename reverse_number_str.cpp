// In C++, to reverse a number means swapping the digit at the last position with the digit at the first position and vice versa.

#include <iostream>

int main()
{
    int a;
    int digit;
    std::cout << "Fill in the number you would like to reverse!: ";
    std::cin >> a;
    while (a != 0)
    {
        digit = a % 10;
        std::cout << digit;
        a = a / 10;
    }
    return 0;
}