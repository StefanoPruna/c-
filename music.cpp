//Example of classes
#include <iostream>
#include "song.hpp"

int main()
{
    //Instantiate a new song from the class Song in song.hpp
    Song howHigh;
    //we now need to add the new title song with the addTitle method from the class Song
    howHigh.addTitle("How High"); //the new title is a string, because we declare as a string
    //now we get the new title with the getTitle method and print it
    std::cout << howHigh.getTitle();
    
    howHigh.addArtist("Method Man and Redman");
    std::cout << howHigh.getArtist();
}