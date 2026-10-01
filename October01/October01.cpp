// October1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "StudentRelatedFunction.h"

#include <iostream>

#include <vector>

using namespace std;

int main()
{
    vector <string> AllStudentNames = getAllStudentNames("studentRoster.csv");

    //for (int i = 0; i < AllStudentNames.size(); i++)
    //{
    //    cout << AllStudentNames[i] << endl;
    //}

    cout << "Longest name is: " << getLongestName(AllStudentNames) << endl;

   ////------InClassLab------
   // vector <string> StudentNameList =
   // {
   //     "Brown, Brayden",
   //     "Cameron, Garrett",
   //     "Cockrell, Evan",
   //     "Demster, Isaac",
   //     "Grimes, John",
   //     "Hernandez, Luis",
   //     "Hirata, Daigo",
   //     "Iria Anenih, Reuben",
   //     "Jackson, Jailen",
   //     "Jacques, Tim",
   //     "Khan, Sameer",
   //     "Lewis, Cordaveon",
   //     "Martinez, Juan",
   //     "McIntosh, Jaleah",
   //     "Phan, Quan",
   //     "Rodriguez, Jerardo",
   //     "Rojas, Ima",
   //     "Taylor, Quincy",
   //     "Terrance, Koby",
   //     "Walden, Daniel",
   //     "Walker, Roderick"
   // };

   // cout << "The size of the List is: " << StudentNameList.size() << endl;

   // string LargestCurrentName;

   // for (int index = 0; index < StudentNameList.size(); index++)
   // {
   //     if (StudentNameList[index].length() > LargestCurrentName.length())
   //     {
   //         LargestCurrentName = StudentNameList[index];
   //     }
   // }
   // cout << LargestCurrentName;


   ////------ClassWork------
   //string firstItemOnGroceryList = "eggs";
   //string secondItemOnGroceryList = "milk";
   //string thirdItemOnGroceryList = "bread";

   ////Both accomplish the same thing

   // vector <string> groceryList = //The .size function is different from the .lenght function 
   // {
   //    "eggs",
   //    "milk",
   //    "bread"
   // };

   // groceryList.push_back("tomato"); //inserts an item at the end of the list
   // groceryList.push_back("fig");

   // cout << "The size of the Grocery List is: " << groceryList.size() << endl;
   // //How do you print this list?
   // //Index stores the location of each item in a list. Matching a number going from 0 - N number of items in the list.
   // for (int index = 1; index <= groceryList.size(); index++) //Be aware of "off by one errors (Since vectors starts at 0 but .size starts at 1), ex <= groceryList.size()"
   // {
   //     cout << groceryList[index] << endl; // [] -> the "subscript" operator, ex X = {1,2,3,4} X [2] = 3 (Note starts at 0)
   // }


}

