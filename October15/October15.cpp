// October15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    /* In-Class Lab 7: Convert Feet to Inches */
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
}


