// October29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip> //for setwidth (setw())
#include <iostream>
#include <vector>
#include <string>



#pragma region functions 
/// <summary>
/// This function prints a table listing the sales data in columns and rows, automaticly adjusting the column width depending on the element lenght.
/// </summary>
/// <param name="salesData"> Reads a Matrix of Integers </param>
/// <returns> None, prints a table </returns>
void printSalesData(std::vector <std::vector <int>> salesData)
{
    //NESTED lOOP
    int ColumnWidth = 5; //find the longest element lenght in the matrix
    int temp_max;
    int current_max = 0;
    for (int row = 0; row < salesData.size(); row++)
    {
        for (int column = 0; column < salesData[row].size(); column++) 
        //salesData[0].size() opens the first row it specificly checks the size of the elements stored in the vector not the total vector
        {
            temp_max = salesData[row][column];
            //std::cout << temp_max;
            if (temp_max > current_max)
            {
                current_max = temp_max;
            }
            int column_width = std::to_string(current_max).length();
            std::cout << std::setw(column_width);
            std::cout << std::left; //left side text align
           
            std::cout << salesData[row][column] << ", ";
           
        }
        std::cout << std::endl;
    }
}
/// <summary>
/// Example function
/// </summary>
/// <returns>Specify what the function returns</returns>
int doStuff()
{
    return 0;
}

#pragma endregion

int main()
{

    std::string a = "123";
    
    /*------InClassLab_13------*/ 
    // tic tac toe
    // 3x3 grid
    
    // xxo
    // xoo
    // oxx

    std::cout << "Hello World!\n";

    //can you make an array of arrays
    std::vector <std::vector <int>> salesData =
    { //Unlike normal vectors its not a list it has to have rows in the form of brackets.
        {1,   201,  344}, //row or columns?
        {4,   545,  6},
        {787, 8,    9},
        {10,  112,  132,  13}

    }; //Array Dimensions: 4x3 also called a matrix. //Row or Columns first?, when specifying dimensions. (Often Rows)
    printSalesData(salesData);

    std::vector <std::vector <char>> Grid =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    
}

