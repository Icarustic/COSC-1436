// October15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    /*
    In-Class Lab 8: Cost and Raange of a Full Tank
    */

    const float Cost_Per_Gallon = 3.80f; //float instead of int since cents are important, use a normal float if you want to prompt for cost per gallon to the user.

    float Full_Tank_Cost = 0.0f; //sets the starting value to 0, the f specifies what data type the value has.


    float Tank_Capacity = 0.0f;

    while (Tank_Capacity <= 0)
    {
        std::cout << "How many gallons does your tank hold?\n";
        std::cin >> Tank_Capacity;
    }
    
    Full_Tank_Cost = Cost_Per_Gallon * Tank_Capacity;

    std::cout << std::fixed << std::setprecision(2); //Display fixed number of digits, in this case is 2 decimal places for cents
    std::cout << "The cost of a full tank of gass is " << Full_Tank_Cost << std::endl;

    const float Miles_Per_Gallon = 25; //20-30 miles per gallon, Fuel effeciency, make the variable a float if you want to prompt for MPG (for their car) from the user

    int Miles_Per_Tank = Tank_Capacity * Miles_Per_Gallon;

    std::cout << "You can travel " << Miles_Per_Tank << " miles on a full tank\n";



    /* 
    In-Class Lab 7: Convert Feet to Inches 
    */
    /*
    int Total_Inches = 0; //variable decleration
    std::cout << "Enter your hieght, in inches:";
    std::cin >> Total_Inches;



    const int Number_of_Inches_Per_Foot = 12; //12 inches in a foot
    std::cout << Total_Inches << " inches is equal to " << Total_Inches / Number_of_Inches_Per_Foot << " feet"; //Calculates number of feet

    std::cout << " and " << Total_Inches % Number_of_Inches_Per_Foot << " inches" << std::endl; //Calculates the remainder in inches

    //Reverse Conversion

    int Total_Feet;
    std::cout << "Enter your hieght, in feet:";
    std::cin >> Total_Feet;
    // Uses the same const value, Number_of_Inches_Per_Foot
    std::cout << Total_Feet << " feet is equal to " << Total_Feet * Number_of_Inches_Per_Foot << " inches";
    */

    /*
    const int Dozen = 12; //variable that cannot vary/change, As such you cant use DOZEN = 13; since it cant be changed.
    //const int Dozen = 13; //Cant redefine a constant or else it causes an error
    std::cout << "The number of items in a dozen is: " << Dozen << std::endl;

    const int NumberOfFeetPerMile = 5280; //A conversion value
    std::cout << "How many miles away is your house from TJC?" << std::endl;
    int numberOfMiles; //You may use float for more precision, If you input 1.5 it will "truncate" it into 1 (does not round up just removes the decimal values).
    std::cin >> numberOfMiles; //We use cin over getline so we dont have to convert a string into a integer
    std::cout << "That is " << numberOfMiles * NumberOfFeetPerMile << " feet";
    */

    /*
    int Counter = 0;
    Counter++; //Adds 1
    Counter += 10; //Adds 10
    Counter--; //Subtract 1
    Counter -= 10; //Subtract 10

    int N1 = 5;
    int N2 = 4;
    int Total;
    // N1 - N2 = Total; Causes an error, due to formating this is not correct and Total needs to be on the left.
    Total = N1 - N2;

    int N3; //causes an error since the value is undefined yet it is called to update its value.

    //N3 = N3 * 2; //N3 needs to be predefined so the computer knows what to do

    std::cout << R"()"; //R = raw string (raw string literal) basicly automaticly adds \n or endl at the end of each string line so you dont manually have to.
    */

}


