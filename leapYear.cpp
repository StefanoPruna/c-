#include <iostream>
#include <string>

int main()
{
    int year;
    
    std::cout << "Pick an year to see if it's a leap year or not:\n";
    std::cin >> year;

    if (year % 4 != 0 && year % 400 != 0)
    {
        std::cout << year << " is not a leap year\n";
    }
    else if (year % 100 != 0)
    {
        std::cout << year << " is a leap year\n";
    }
    else
    {
        std::cout << year << " is a leap year\n";
    }
}