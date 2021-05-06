#include <iostream>

// void introduction(std::string first_name, std::string last_name)
// {
//   std::cout << last_name << ", " << first_name << " " << last_name << "\n";
// }

// int main() 
// {  
//   introduction("James", "Bond");  
// }

//

double average(double num1, double num2)
{
    return (num1 + num2) / 2;
}

int main()
{
    std::cout << average(23.0, 32.0) << "\n";
    std::cout << average(46.0, 987.0) << "\n";
}