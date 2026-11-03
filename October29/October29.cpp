// October29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip> //for setwidth (setw())
#include <iostream>
#include<map> 
#include <string>
#include <vector>



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

int CalculateAverageSales(std::vector <std::vector <int>> salesData) //Total Average Sales
{
    /// First add up all sales in each row and column.
    double CurrentTotal = 0;
    for (int row = 0; row < salesData.size(); row++)
    {
        for (int column = 0; column < salesData[row].size(); column++)
        {
            CurrentTotal += salesData[row][column]; 
            //If you want to choose a specific point you do salesData[1][1] which shows the second row and second column that being 545.
        }
    }
    //std::cout << "Row#:" << (salesData[0].size());

    double AverageSales = CurrentTotal / ( salesData.size() * salesData[0].size() ); //rows x columns
   
    return AverageSales; //needs to be divided by the total number of elements in the matrix to get the average.
}

int CalculateMaxSale(std::vector <std::vector <int>> salesData)
{
    double CurrentMax = 0;
    for (int row = 0; row < salesData.size(); row++)
    {
        for (int column = 0; column < salesData[row].size(); column++)
        {
            if (CurrentMax < salesData[row][column])
            {
                CurrentMax = salesData[row][column];
            }
        }
    }
    //std::cout << "Current Max " << CurrentMax;
    return CurrentMax;
}

int CalculateMonthAverageSales(std::vector <std::vector <int>> salesData, int Month) //Specify the Column
{
    double MonthTotal = 0;
    for (int row = 0; row < salesData.size(); row++)
    {
        MonthTotal += salesData[row][Month];
    }
    //std::cout << "MonthTotal" << MonthTotal;
    double MonthAverage = MonthTotal / salesData.size(); //divide by the people/rows
    //std::cout << "MonthDivide" << salesData.size();
    return MonthAverage;
}

int CalculatePersonAverageSales(std::vector <std::vector <int>> salesData, int Person) //Specify the Row
{
    double PersonTotal = 0;
    for (int column = 0; column < salesData[Person].size(); column++)
    {
        PersonTotal += salesData[Person][column];
    }
    double PersonAverage = PersonTotal / salesData[0].size(); //divide by the months/columns
    return PersonAverage;
}

//this defines a new data type (user-defined data type)
struct SalesRecord
{
    std::string name; 
    std::string month; //row = -1;
    float sales = - 1.0f; //If the structure setups the data types available in the vector how does initilizing affect the vector?
};

int main()
{
    std::string a; 

    SalesRecord salesRecord; //"instantation" of an object
    //std::cout << salesRecord[]
    std::vector<SalesRecord> sales =
    {
        {"Alice", "February", 99.99},
        {"Bob", "March", 123.45}
    };

    //std::cout << sales[0] << std::endl; 



    //std::map <std::string,  
    //std::string a = "123";
    
    /*------InClassLab_13------*/ 
    // tic tac toe
    // 3x3 grid
    
    // xxo
    // xoo
    // oxx

    std::cout << "Hello World!\n";

    //can you make an array of arrays
    std::vector <std::vector <int>> salesData = //Rectangular Matrix
    { //Unlike normal vectors its not a list it has to have rows in the form of brackets. //row or columns?
        //Jan //Feb //March
        {1,   201,  344}, //Bob's Sales
        {4,   545,  6},   //Carol's Sales
        {787, 8,    9},   //Darth's Sales
        {10,  112,  132}  //Eve's Sales

    }; //Array Dimensions: 4x3 also called a matrix. //Row or Columns first?, when specifying dimensions. (Often Rows)
    printSalesData(salesData);

    std::vector <std::vector <char>> Grid =
    {   
        {1,   2,    3},
        {4,   5,    6}, 
        {7,   8,    9}, 
        {10,  11,   12} 
    };

    //Can we write a function to determine average sales per month.
    double AverageSales = CalculateAverageSales(salesData);
    std::cout << "AverageSales: " << AverageSales << std::endl;

    //Calculate Max Sale Value
    double MaxSale = CalculateMaxSale(salesData);
    std::cout << "MaxSale: " << MaxSale << std::endl;

    //Calculate Average Sales Per Month/Column
    std::cout << "Choose a Month (Enter a number)\n";
    int Month;
    std::cin >> Month;
    Month--; //subtract by 1 to account for array starting at 0 not 1
    double MonthAverageSales = CalculateMonthAverageSales(salesData, Month);
    std::cout << "MonthAverageSales: " << MonthAverageSales << std::endl;

    //Calculate Average Sales Per Person/Row
    std::cout << "Choose a Person (Enter a number)\n"; //make a map to assign a person to a number value
    int Person;
    std::cin >> Person;
    Person--;
    double PersonAverageSales = CalculatePersonAverageSales(salesData, Person);
    std::cout << "PersonAverageSales: " << PersonAverageSales << std::endl;

}

