#include "song.hpp"

void Song::addTitle(std::string newTitle)
{
    title = newTitle;
}

std::string Song::getTitle()
{
    return title;
}

void Song::addArtist(std::string newArtist)
{
    artist = newArtist;
}

std::string Song::getArtist()
{
    return artist;
}