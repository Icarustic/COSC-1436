
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

void PickASquare(std::vector <std::vector <char>> &A2DArray, bool &Player)
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

void CheckWin(const std::vector<std::vector<char>> &A2DArray)
{
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
    int combination = 4; //How many in a row to win
    
    //bool inARow('1', '2', )

    //std::cout << "max" << A2DArray.size() - 1 << std::endl;

    for (int row = 0; row < A2DArray.size(); row++)
    {
        for (int column = 0; column < A2DArray[row].size(); column++)
        {
            if (A2DArray[row][column] == 'x')
            {

                //up and down
                for (int i = 1; i <= combination; i++)
                {
                    if (row - i >= min && row - i <= max)
                    {
                        if (A2DArray[row - i][column] == 'x')
                        {
                            if (i == combination - 1)
                            {
                                std::cout << "Player x WinsVertical!" << std::endl;
                            }
                            
                        }
                        else
                        {
                            break;
                        }
                    }
                    // Make a functions that intakes direction, min and max, and combo to reduce the size of this.
                    //CheckPath("up", max, combination, A2DArray);
                }

                //left and right
                for (int i = 1; i <= combination; i++)
                {
                    if (column - i >= min && column - i <= max)
                    {
                        if (A2DArray[row][column - i] == 'x')
                        {
                            if (i == combination - 1)
                            {
                                std::cout << "Player x WinsHorizontal!" << std::endl;
                            }

                        }
                        else
                        {
                            break;
                        }
                    }
                }

                //top right 
                if (column + 1 <= max and row - 1 >= min and A2DArray[row - 1][column + 1] == 'x')
                {
                    if (column + 2 <= max and row - 2 >= min and A2DArray[row - 2][column + 2] == 'x')
                    {
                        std::cout << "Player x winsTopRight\n";
                    }
                    else if (column + 2 > max and row - 2 < min) //accounts for center origin
                    {
                        if (column - 1 >= min and row + 1 <= max and A2DArray[row + 1][column - 1] == 'x')
                        {
                            std::cout << "Player x winsTopRight2\n";
                        }
                    }
                }
                //top left 
                if (column - 1 >= min and row - 1 >= min and A2DArray[row - 1][column - 1] == 'x')
                {
                    if (column - 2 >= min and row - 2 >= min and A2DArray[row - 2][column - 2] == 'x')
                    {
                        std::cout << "Player x winsTopLeft\n";
                    }
                    else if (column - 2 < min and row - 2 < min) //accounts for center origin
                    {
                        if (column + 1 <= max and row + 1 <= max and A2DArray[row + 1][column + 1] == 'x')
                        {
                            std::cout << "Player x winsTopLeft2\n";
                        }
                    }
                }
                //bottom right (Accounted for by top left)

                //bottom left (Accounted for by top right)



            }


            else if (A2DArray[row][column] == 'o')
            {
                //up
                if (row - 1 >= min and A2DArray[row - 1][column] == 'o')
                {
                    if (row - 2 >= min and A2DArray[row - 2][column] == 'o')
                    {
                        std::cout << "Player o winsUp\n";
                    }
                    else if (row - 2 < min) //accounts for center origin
                    {
                        if (row + 1 <= max and A2DArray[row + 1][column] == 'o')
                        {
                            std::cout << "Player o winsUp2\n";
                        }
                    }
                }

                //down
                if (row + 1 <= max and A2DArray[row + 1][column] == 'o')
                {
                    if (row + 2 <= max and A2DArray[row + 2][column] == 'o')
                    {
                        std::cout << "Player o winsDown\n";
                    }
                    else if (row + 2 > max) //accounts for center origin
                    {
                        if (row - 1 >= min and A2DArray[row - 1][column] == 'o')
                        {
                            std::cout << "Player o winsDown2\n";
                        }
                    }
                }

                //left
                if (column - 1 >= min and A2DArray[row][column - 1] == 'o')
                {
                    if (column - 2 >= min and A2DArray[row][column - 2] == 'o')
                    {
                        std::cout << "Player o winsLeft\n";
                    }
                    else if (column - 2 < min) //accounts for center origin
                    {
                        if (column + 1 <= max and A2DArray[row][column + 1] == 'o')
                        {
                            std::cout << "Player o winsLeft2\n";
                        }
                    }
                }
                //right
                if (column + 1 <= max and A2DArray[row][column + 1] == 'o')
                {
                    if (column + 2 <= max and A2DArray[row][column + 2] == 'o')
                    {
                        std::cout << "Player o winsRight\n";
                    }
                    else if (column + 2 > max) //accounts for center origin
                    {
                        if (column - 1 >= min and A2DArray[row][column - 1] == 'o')
                        {
                            std::cout << "Player o winsRight2\n";
                        }
                    }
                }
                //top right 
                if (column + 1 <= max and row - 1 >= min and A2DArray[row - 1][column + 1] == 'o')
                {
                    if (column + 2 <= max and row - 2 >= min and A2DArray[row - 2][column + 2] == 'o')
                    {
                        std::cout << "Player o winsTopRight\n";
                    }
                    else if (column + 2 > max and row - 2 < min) //accounts for center origin
                    {
                        if (column - 1 >= min and row + 1 <= max and A2DArray[row + 1][column - 1] == 'o')
                        {
                            std::cout << "Player o winsTopRight2\n";
                        }
                    }
                }
                //top left 
                if (column - 1 >= min and row - 1 >= min and A2DArray[row - 1][column - 1] == 'o')
                {
                    if (column - 2 >= min and row - 2 >= min and A2DArray[row - 2][column - 2] == 'o')
                    {
                        std::cout << "Player o winsTopLeft\n";
                    }
                    else if (column - 2 < min and row - 2 < min) //accounts for center origin
                    {
                        if (column + 1 <= max and row + 1 <= max and A2DArray[row + 1][column + 1] == 'o')
                        {
                            std::cout << "Player o winsTopLeft2\n";
                        }
                    }
                }
                //bottom right (Accounted for by top left)

                //bottom left (Accounted for by top right)

            }
            else;
            {
            }
        }
    }
}

//void CheckPath(std::string direction, int gridsize, int combination)
//{
//    for (int i = 1; i <= combination; i++)
//    {
//        if (row - i >= min && row - i <= max)
//        {
//            if (A2DArray[row - i][column] == 'x')
//            {
//                if (i == combination - 1)
//                {
//                    std::cout << "Player x wins!" << std::endl;
//                }
//            }
//        }
//        // Make a functions that intakes direction, min and max, and combo to reduce the size of this.
//        CheckPath("up", max, combination);
//    }
//}
