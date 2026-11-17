#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <random>

/// <summary>
/// Opens a file that contains a list of words and appends them to a vector.
/// </summary>
/// <param name="filename"></param>
/// Determines the list of words it stores to use in the game
/// <returns></returns>
std::vector <std::string> getDictionary(std::string filename);

/// <summary>
/// Picks a random word from the vector containing a list of words.
/// </summary>
/// <param name="WordLibrary"></param>
/// The vector containing the list of words.
/// <returns></returns>
std::string getRandomWord(std::vector <std::string> WordLibrary);

void findAndReplace(std::string &placeholder, std::string wordToGuess, char chrecterToSearchFor);

/// <summary>
/// Note that this function will call other functions to display the game and get input from the user.
/// </summary>
void playHangman();

void DisplayGame();

void fillIn(std::string& GuessedWord, std::string ActualWord, char Guess);

