#pragma once
#include <iostream>
#include <vector>

namespace TicTacToe //type alias to improve readability of code
{
    using Grid = std::vector <std::vector <char>>;
}

void Print2DArray(std::vector <std::vector <char>> A2DArray, bool Player);

void PickASquare(std::vector <std::vector <char>> &A2DArray, bool Player);

void CheckWin(std::vector <std::vector <char>> A2DArray);