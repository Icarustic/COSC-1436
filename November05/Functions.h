#pragma once
#include <iostream>
#include <vector>

namespace TicTacToe //type alias to improve readability of code
{
    //char emptySpotIndicator = ' ';

    using Grid = std::vector <std::vector <char>>;
}

void Print2DArray(std::vector <std::vector <char>> A2DArray, bool Player);

void PickASquare(std::vector <std::vector <char>> &A2DArray, bool &Player);

void CheckWin(const std::vector <std::vector <char>> &A2DArray);
// using both at the same time helps when you want to
// veiw the original grid and not read a copied version of the grid,
// so it can detect changes made to the original in real time, 
// rather than buffering to create a copy and detect changes.