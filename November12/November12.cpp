// November12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

#include "Hangman.h"
//Hang man Game
int main()
{
    std::vector <std::string> WordLibrary = getDictionary("dictionary.txt");

    for (int i = 0; i < 10; i++)
    {
        std::cout << getRandomWord(WordLibrary) << std::endl;
    }
}

