#include <iostream>
#include <string>

int main()
{
  //Switch doesn't work well with string, for string, use if statements
  /*std::string day;
  std::cout << "What day is it\n";
  std::cin >> day;

  // switch (day)
  // {
  // case 'Monday':
  //   /* code */
  //   break;
  
  // default:
  //   break;
  // }*/
    int number;
    
    std::cout << "Enter a number between 1 and 9:\n";
    std::cin >> number;

    switch (number)
    {
    case 1/* constant-expression */:
        /* code */
        std::cout << "Bulbusaur\n";
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    case 4 :
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;
    case 7 :
      std::cout << "Squirtle";
      break;
    case 8 :
      std::cout << "Wartortle";
      break;
    case 9 :
      std::cout << "Blastoise";
      break;
    default :
      std::cout << "Wrong number\n";
      break;
    }
}