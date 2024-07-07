// In this C++ program, we would like to add all the digits in the iniputted number and return this

#include <cstdio>
#include <iostream>

int main()
{
    std::cout << "Fill in a number that you want to know the dum of its digits: \n";
    int number;
    int sum = 0;
    std::cin >> number;
    while(number != 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }
    printf("The sum of digits is: %d\n", sum);
}