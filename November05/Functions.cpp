
#include "Functions.h"
#include <iostream>
#include <vector>
#include <iomanip> //for setwidth (setw())

void Print2DArray(std::vector <std::vector <char>> A2DArray, bool Player)
{
    char Charecter;
    std::string VisualPlayer;
    if (Player == false)
    {
        VisualPlayer = "Player x";
    }
    else if (Player == true)
    {
        VisualPlayer = "Player o";
    }

    std::cout << "Tic Tac Toe: Pick a space " << VisualPlayer << std::endl;
    for (int row = 0; row < A2DArray.size(); row++) //outerloop
    {
        std::cout << "|";
        for (int column = 0; column < A2DArray[row].size(); column++) //innerloop
        {
            std::cout << std::setw(2);
            std::cout << std::left; //left side text align
            std::cout << A2DArray[row][column] << "|";
        }

        std::cout << std::endl <<  "----------" << std::endl; //new line after each row
    }

}

void PickASquare(std::vector <std::vector <char>> &A2DArray, bool Player)
{
    char Charecter = ' ';
    std::string VisualPlayer;
    if (Player == false)
    {
        Charecter = 'x';
        VisualPlayer = "Player x";
    }
    else if (Player == true)
    {
        Charecter = 'o';
        VisualPlayer = "Player o";
    }
    while (true)


    {
        std::cout << "Select a row and column " << VisualPlayer << std::endl;

        std::cout << "Row - Horizontal: ";
        int ChoiceRow;
        std::cin >> ChoiceRow;
        ChoiceRow--;

        std::cout << "Column - Vertical: ";
        int ChoiceColumn;
        std::cin >> ChoiceColumn;
        ChoiceColumn--;

        if (A2DArray[ChoiceRow][ChoiceColumn] == ' ') //Id Prefer to go x then y but to remain consistent ill keep it the same as the 2DArray
        {
            A2DArray[ChoiceRow][ChoiceColumn] = Charecter;
            Player = !Player; //Switches the player
            break;
        }
        else if (A2DArray[ChoiceRow][ChoiceColumn] != ' ')
        {
            std::cout << "That space is already taken, please pick a new space\n";
            continue;
        }
    }

}

void CheckWin(std::vector<std::vector<char>> A2DArray)
{
    //Do I check for every iteration of a win? for both x and y?
    
    //-Check The Whole Board:

    //Row Wins
    //Top
    //Middle
    //Bottom

    //Column Wins
    //Left
    //Middle
    //Right

    //Diagnol Wins
    //Downward
    //Upward

    //else Tie

    //-Check A Selection:

    //Check across a Diagnol
    //Top Left
     //Check Right
     //Check Below
    
    //Middle
     //Check Right/Left
     //Check Below/Above
     //Check Diagonal Up/Down

    
    //Bottom Right
     //Check Left
     //Check Above
    
    //each of these positions surrounding are checked to see if any same charecters are around, 
    //if so it will check the next position in the same direction to see if there are 3 in a row.

    //-Check Proximity:

    //for element in 2d if it is x or y , if within 2d array range, check:
    // up, 
    // down, 
    // left, 
    // right, 
    // top right, 
    // bottom right, 
    // top left, 
    // bottom left,
    // to account for the center if it finds a match but then exists out of the range it will then check the opposite direction.
    // if the charecters match, check the next position in the same direction to see if there are 3 in a row.

    //2D Grid Range;
    int min = 0;
    int max = A2DArray.size() - 1; //since the array begins at 0, the max is the size of the array -1, so max of 2 is 3x3

    std::cout << "max" << A2DArray.size() - 1 << std::endl;

    for (int row = 0; row < A2DArray.size(); row++)
    {
        for (int column = 0; column < A2DArray[row].size(); column++)
        {
            if (A2DArray[row][column] == 'x')
            {
                //up
                if (row - 1 >= min and A2DArray[row - 1][column] == 'x')
                {
                    if (row - 2 >= min and A2DArray[row - 2][column] == 'x')
                    {
                        std::cout << "Player x winsUp\n";
                    }
                    else if (row - 2 < min) //accounts for center origin
                    {
                        if (row + 1 <= max and A2DArray[row + 1][column] == 'x')
                        {
                            std::cout << "Player x winsUp2\n";
                        }
                    }
                }

                //down
                if (row + 1 <= max and A2DArray[row + 1][column] == 'x')
                {
                    if (row + 2 <= max and A2DArray[row + 2][column] == 'x')
                    {
                        std::cout << "Player x winsDown\n";
                    }
                    else if (row + 2 > max) //accounts for center origin
                    {
                        if (row - 1 > min and A2DArray[row - 1][column] == 'x')
                        {
                            std::cout << "Player x winsDown2\n";
                        }
                    }
                }

                //left
                if (column - 1 >= min and A2DArray[row][column - 1] == 'x')
                {
                    if (column - 2 >= min and A2DArray[row][column - 2] == 'x')
                    {
                        std::cout << "Player x winsLeft\n";
                    }
                    else if (column - 2 < min) //accounts for center origin
                    {
                        if (column + 1 <= max and A2DArray[row][column + 1] == 'x')
                        {
                            std::cout << "Player x winsLeft2\n";
                        }
                    }
                }
                //right
                if (column + 1 <= max and A2DArray[row][column + 1] == 'x')
                {
                    if (column + 2 <= max and A2DArray[row][column + 2] == 'x')
                    {
                        std::cout << "Player x winsRight\n";
                    }
                    else if (column + 2 > max) //accounts for center origin
                    {
                        if (column - 1 > min and A2DArray[row][column - 1] == 'x')
                        {
                            std::cout << "Player x winsRight2\n";
                        }
                    }
                }




            }
            else if (A2DArray[row][column] == 'o')
            {

            }
            else;
            {
            }
        }
    }
}
