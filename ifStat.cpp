#include <iostream>
#include <stdlib.h>
#include <ctime>

int main()
{
    double ph;

    std::cout << "Enter the PH: \n";
    std::cin >> ph;

  if (ph > 7)
  {
    std::cout << "Basic\n";
  }

  else if (ph < 7)
  {
    std::cout << "Acidic\n";
  }

  else
  {
    std::cout << "Neutral\n";
  }

  //Random function; remember to include the stdlib.h and ctime
    srand (time(NULL));
    int fortune = rand() % 10;

    if (fortune == 0) {

    std::cout << "Flattery will go far tonight.\n";
  
  } else if (fortune == 1) {
    
    std::cout << "Don't behave with cold manners.\n";
  
  } else if (fortune == 2) {
    
    std::cout << "May you someday be carbon neutral\n";
    
  } else if (fortune == 3) {
    
    std::cout << "You have rice in your teeth.\n";
    
  } else if (fortune == 4) {
    
    std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
    
  } else if (fortune == 5) {
    
    std::cout << "No snowflake feels responsible in an avalanche.\n";
    
  } else if (fortune == 6) {
    
    std::cout << "He who laughs last is laughing at you.\n";
    
  } else if (fortune == 7) {
    
    std::cout << "If you look back, you'll soon be going that way.\n";
    
  } else if (fortune == 8) {
    
    std::cout << "You will die alone and poorly dressed.\n";
      
  } else if (fortune == 9) {
    
    std::cout << "The fortune you seek is in another cookie.\n";
      
  }
