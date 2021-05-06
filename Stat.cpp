#include <iostream>
#include <string>

int main() 
{  
  int weight;
  //string planetFight;
  char planetFight[10];
  //std::string myVar;

  std::cout << "Insert your weight from 0.38 to 2.34:\n";
  std::cin >> weight;

  if (weight <= 0.38)
  {
    std::cout << "You can fight in Mercury or Mars\n";
  }
  else if (weight > 0.38 && weight <= 0.91)
  {
     std::cout << "You can fight in Venus\n";
  }
  else if (weight == 0.92)
  {
     std::cout << "You can fight in Uranus\n";
  }
  else if (weight > 0.92 && weight <= 1.06)
  {
     std::cout << "You can fight in Saturn\n";
  }
  else if (weight > 1.06 && weight <= 1.19)
  {
     std::cout << "You can fight in Neptune\n";
  }
  else
  {
     std::cout << "You can fight in Jupiter\n";
  }

  std::cout << "Enter a number for the planet you want to fight:(Mercury, Venus, Mars, Jupiter, Saturn, Uranus, Neptune)\n";
  std::cin >> planetFight;
  std::cout << "You will fight in " << planetFight << "\n";
}  