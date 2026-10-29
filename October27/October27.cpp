// October27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Functions.h"

using namespace std;

void Display_ToDoList(vector <string> ToDoList)
{
    cout << "ToDoList: \n";
    for (int i = 0; i < ToDoList.size(); i++)
    {
        cout << ToDoList[i];
    }
}
void AddItem_ToDoList(vector <string> ToDoList)
{
    cin.ignore();
    cout << "Enter a task into the ToDoList:\n";
    string Item;
    getline(cin, Item);

    //cin.ignore();
    int Pos = 1;
    while (true)
    {
        cout << "Specify its location in the list (ascending from 1)\n";
        cin >> Pos;
        if (Pos > 0)
        {
            ToDoList.insert(ToDoList.begin() + (Pos - 1), Item);  //need (pos, item)
            break;
        }
        else
        {
            system("cls");
            continue;
        }
    }
}
void RemoveItem_ToDoList(vector <string> ToDoList)
{
    int Pos = 1;
    while (true)
    {
        cout << "Specify its location in the list (ascending from 1)\n";
        cin >> Pos;
        if (Pos > 0)
        {
            break;
        }
        else
        {
            system("cls");
            continue;
        }
    }
    ToDoList.erase(ToDoList.begin() + (Pos - 1));  //need (pos)
}


int main()
{
    //------InClassLab_13------ 

    vector <string> ToDoList =
    {
        "test", "test2",
    };
    //ToDoList.resize(ToDoList.size() + 5); //always gaurantee that there are 5 empty spaces to insert items into can be adjusted to how ever many existing spaces are needed ahead of time.

    //Display_ToDoList(ToDoList); //Displays ToDoList at start;

    int choice;
    while (true)
    {
        cout << "Pick an Option: \n 1. Display ToDoList\n 2. Add Item\n 3. Remove Item\n 4. End Program\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Display_ToDoList(ToDoList);
            break;
        case 2:
            AddItem_ToDoList(ToDoList);
            break;
        case 3:
            RemoveItem_ToDoList(ToDoList);
            break;
        case 4:
            break;
        default:
            continue;
        }
    }

    

     


    //------InClassLab_12------
    /*
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
    */
}

