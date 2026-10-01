#include "StudentRelatedFunction.h"
#include <iostream>
#include <fstream>
using namespace std; 

vector <string> getAllStudentNames(string filename)
{
    ifstream fin(filename);
    if (fin.is_open() == false)
    {
        cout << "File not Found\n";
        return {}; //Returns an empty array
    }
    //If file found, then loop through it and read in and store all names.
    vector <string> allNames; //This list will hold all the names 
    string CurrentName;
    while (getline(fin, CurrentName)) //need a temprary variable since it expects a normal string not a vector of strings
    {
        allNames.push_back(CurrentName); //Takes the getline and adds it to the end of the list
    }

    fin.close(); //Closes the file after it is done reading it, so it can be used by other programs without running into the error of it being still open elsewhere.

    return allNames;
}

string getLongestName(vector <string> names)
{
    //Write our first algorithm
    string currentlargestName;
    //string secondlargestName;
    //string thirdlargestName;
    for (int i = 0; i < names.size(); i++)
    {
        if (names[i].length() > currentlargestName.length())
        {
            currentlargestName = names[i];
        }
    }
    return currentlargestName;
    
    //return string(); //empty string
}

void demoASimpleArray()
{

    vector <string> groceryList = //The .size function is different from the .lenght function 
    {
       "eggs",
       "milk",
       "bread"
    };

    groceryList.push_back("tomato"); //inserts an item at the end of the list
    groceryList.push_back("fig");

    cout << "The size of the Grocery List is: " << groceryList.size() << endl;
    //How do you print this list?
    //Index stores the location of each item in a list. Matching a number going from 0 - N number of items in the list.
    for (int index = 0; index <= groceryList.size(); index++) //Be aware of "off by one errors (Since vectors starts at 0 but .size starts at 1), ex <= groceryList.size()"
    {
        cout << groceryList[index] << endl; // [] -> the "subscript" operator, ex X = {1,2,3,4} X [2] = 3 (Note starts at 0)
    }

}