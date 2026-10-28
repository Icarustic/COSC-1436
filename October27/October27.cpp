// October27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Functions.h"

using namespace std;

int main()
{
    //------InClassLab_13------ 

    vector <string> ToDoList =
    {

    };
    ToDoList.insert(ToDoList.begin(), "Item"); //need (pos, item)
    //ToDoList.erase()


    //------InClassLab_12------
    
    string Word;
    bool proceed = true; //Proceed instead of Continue due to existing functions
    while (proceed)
    {
        cout << "Input a word to determine if it is a Palindrome, (type q to end program)\n";
        getline(cin, Word);
        if (Word == "q" or Word == "Quit" or Word == "quit")
        {
            proceed = false;
            cout << "check?";
        }
        else if (isPalindrome(Word) == true) //Only call the function once to prevent its code being called more than once.
        {
            cout << Word << " is a Palindrome\n";
        }
        else
        {
            cout << Word << " is Not a Palindrome\n";
        }
        system("pause");
        system("cls");
    }
}

