// The program takes a number and checks if it is an Adam number. A number when squared, reversed, its root is found and is reversed again is equal to the original number, then it is called an Adam number.

#include <iostream>
#include <cmath>

int reverse_number_int(int a)
{
    int digit;
    int full_number = 0;
    int first_number = 0;
    while (a != 0)
    {
        digit = a % 10;
        if (first_number == 0)
        {
            full_number = full_number + digit;
            first_number++; 
        }
        else 
        {
            full_number = (full_number * 10) + digit;
        }
        a = a / 10;
    }
    return full_number;
}

int main()
{
    int number;
    int number_reversed;
    int number_sq;
    int number_reversed_sq;

    std::cout << "Is it an Adam number? Fill in the number you want to check: ";
    std::cin >> number;

    number_reversed = reverse_number_int(number);
    number_sq = pow(number, 2);
    number_reversed_sq = pow(number_reversed, 2);
    if (number_sq == reverse_number_int(number_reversed_sq))
        std::cout << "Number " << number << " is indeed an Adam number";
    else
        std::cout << "Number " << number << " is not an Adam number";
    return 0;
}