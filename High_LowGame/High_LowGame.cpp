// High_LowGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Made: September 24
#include <iostream>
#include <random>
#include "HLO.h"

using namespace std;

int main()
{
    //---BluePrint---
    // 1. Generate a Random Number
    // 2. Prompt the User to Guess the Random Number (while guess is (not equal) != randomeNumber)
    // 3. Game Loop -> Tell the User if the Random Number is Lower or Higher than their Guess
    // 4. Decide if the User loses after using to many Guesses

    //---Function(RandomNumber)---
    //Make this a function, using a header file -> (filename.h or HLO.h)  
    //Then a specification file, using a a implementation file -> HLO.cpp 
    // Holds the Code:
    // srand(time(0));
    // int randomNumber = rand() % 100;
    
     //for (int i = 1; i < 10; i++) // repeats the code 10 times, i = iteration
    //{ }
    
    //---Variables---

    //const int N = 100;
    constexpr int N = 100; //means constant expression, usefull since it is intilized first and embedded making it usefull across files
    constexpr int MAX_NUMBER_OF_GUESSES = 5; //snake_case ; SCREAMING_SNAKE_CASE
    //N = 123; //Syntax Errpr becuase it cant be modified since it is a "constant"
    
    int randomNumber = getRandomNumberBetween0AndN(N); // N Refers to the constexpr, sets the variable (randomNumber) to a value by calling the function which uses the paramater N above

    int numberOfGuesses = 0;

    //cout << "The random number to guess is: " << randomNumber << endl;
    int userGuess = -999; //Must be set to a arbitary value, if the random number is 0 and user guess it preset to 0 then they automaticly win.

    //---GuessPrompt---

    while ( (userGuess != randomNumber) && (numberOfGuesses < MAX_NUMBER_OF_GUESSES) )
    {
        userGuess = getUserGuess(); // A function to prompt the user for a response, which sets cin >> userGuess, (userGuess = New(userGuess))

    //---Game Logic--- (Can be turned into a function aswell)

        if (userGuess > randomNumber)
        {
            cout << "Guess was too high\n";
        }
        else if (userGuess < randomNumber)
        {
            cout << "Guess was too low\n";
        }
        else
        {
            cout << "Correct Guess\n";
            // Despite the condition for the while loop being broken it still continues to print the else statment and skip the rest of the while loop.
        }
        
        numberOfGuesses++; // numberOfGuesses = numberOfGuesses + 1
        cout << "you have guessed: " << numberOfGuesses << " times\n";
        cout << "\033[31m"; //Makes text color red
        cout << "Remaining Guessses: " << (MAX_NUMBER_OF_GUESSES - numberOfGuesses) << endl;
        cout << "\033[0m"; //Resets text color

        system("pause");
        system("cls");
    } //end of the While Loop

    //---Lost Game---

    if (userGuess != randomNumber)
    {
        cout << "You Lost, the number was: " << randomNumber << endl;
    }
}

