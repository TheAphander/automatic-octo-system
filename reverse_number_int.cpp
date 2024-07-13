// In C++, to reverse a number means swapping the digit at the last position with the digit at the first position and vice versa and saving the reversed value in another variable.

#include <iostream>

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
    int a;
    int number;
    std::cout << "Fill in the number you would like to reverse!: ";
    std::cin >> a;
    number = reverse_number_int(a);
    std::cout << "int number " << number;
    return 0;
}

