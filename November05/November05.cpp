// November05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Functions.h"

#include <iomanip> //for setwidth (setw())
#include <iostream>
#include <vector>

bool Player = false; //false = player x, true = player o


void PickASquare(std::vector <std::vector <std::string>> A2DArray)
{
    std::cout << "Select a row and column\n" << Player << std::endl;
    std::cout << "Column/X: ";
    int ChoiceColumn;
    std::cin >> ChoiceColumn;

    std::cout << "Row/Y: ";
    int ChoiceRow;
    std::cin >> ChoiceRow;
  
}

int main()
{
    /*
    std::vector <std::vector <std::string>> SeatingList =
    {
        {"Tim",     "Casper",     "Jaleah", "Alice",   "Bob"}, //First Row of seats
        {"Python",  "Hirata san", "Empty",  "Demster", "Walden"},
        {"Sameer",  "Carol",      "Darth",  "Eve",     "Frank"}
    };

    Print2DArray(SeatingList);

    //Prints Tim
    std::cout << SeatingList[0][0] << std::endl;

    //Change a value in the 2d Array
    SeatingList[0][1] = "someone else"; //Changes Casper to someone else

    //To print the entire 2d array use a loop
    */

    //Tic Tac Toe Game
    /*BluePrint*/
    // 1. 3x3 2D Array to store charecters, x and o
    // 2. Print the 2D Array
    // 3. Prompt user to pick a row and column to place their charecter, Indicating which user is playing.
    // 4. Check if a spot is already taken, if so prompt user to pick a new spot. //Maybe also include a feature that removes the oldest charecter placed so the game can continues.
    // 5. Check if 3 charecters are in a row, column, or diagonal, if so declare the winner and end the game.

    // Need & both in header and .cpp file to edit the 2D array in the function.

    std::vector <std::vector <char>> Grid = 
    {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };
    while (true)
    {
        Print2DArray(Grid, Player);
        PickASquare(Grid, Player); //Currently they pick a row and column but alphabets can also be used as placeholders for the grid.
        CheckWin(Grid);
        system("pause");
    }
}


