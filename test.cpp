#include <iostream>

int main()
{
    int score = 1234 * 99;
    std::cout << "Player score is: " << score <<"\n";

    int tip = 0;
    std::cout << "Enter tip amount: ";
    std::cin >> tip;
    std::cout << "you paid " << tip << " dollars\n";
}