//Let's create a class related to the main music.cpp
#include <string>
#include <iostream>

class Song
{
    std::string title;//when we create a new attribute, they are private
    std::string artist;

    public:
        void addTitle(std::string newTitle);
        std::string getTitle();

        void addArtist(std::string newArtist);
        std::string getArtist();

        //Declare a constructor
        // Song(std::string newTitle, std::string newArtist);
        // std::string getTitle();
        // std::string getArtist();
};