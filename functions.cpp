#include <iostream>
#include <cmath>//it's for the sqrt function

// void oscarWildeQuote()
// {
//     std::cout << "The highest, as the lowest, form of criticism is a mode of autobiography.\n";
// }

// int main()
// {
//     std::cout << sqrt(9) << "\n";

//     srand (time(NULL));
//     int theAmazingRandomNumber = rand() % 30;
//     std::cout << theAmazingRandomNumber << "\n";

//     oscarWildeQuote();
// }

// std::string alwaysBlue()
// {
//     return "blue!\n";
//     std::cout << "Returned blue!"; //because it's after return, this line of code won't be executed!
// }

// bool needsItSupport()
// {
//     bool support;
  
//     std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
//     std::cin >> support;
//     //std::cout << support;
//     return support;
  
// }

// int main()
// {  
//   //std::cout << needsItSupport() << "\n"; or we can assign the result to a var:
//   bool supportAnswer = needsItSupport();
//   std::cout << supportAnswer << "\n";
// }

// void getEmergencyNumber(int emergencyNumber) 
// {
//     std::cout << "Dial " << emergencyNumber << "\n";
// }

// int main()
// {
//     getEmergencyNumber(959);
// }

//the same function, but with declaring a string

// void getEmergencyNumber(std::string emergencyNumber) 
// {
//     std::cout << "Dial " << emergencyNumber << "\n";
// }

// int main()
// {
//     getEmergencyNumber("959");
// }

void nameXTimes(std::string name, int x)
{
    while (x > 0)
    {
        std::cout << name;
        x--;
    }
}

int main()
{
    std::string myName;
    std::cout << "Add your name here\n";
    std::cin >> myName;
    int someNumber = 5;

    nameXTimes(myName, someNumber);
}