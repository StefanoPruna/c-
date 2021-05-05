#include <iostream>

int main()
{
    double tempf;
    double tempc;

    std::cout << "Insert the temp in Fahrenheit degrees: ";
    std::cin >> tempf;
    
    tempc = (tempf - 32) / 1.8;
    
    std::cout << "The temp is "  << tempc << " degrees Celsius.\n";
}