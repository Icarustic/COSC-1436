// JankenponGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void ReadInLowerCase(string &input) //Turns input string variables into lower case
{
    getline(cin, input);

    for (char& c : input)
    {
        c = tolower(static_cast<unsigned char> (c));
    }
}


int main()
{
    //-------------User1-------------
    cout << "[Rock, Paper, Scissors]\n";
    string User1Choice;
    while (true)
    {
        cout << "User 2: Pick An Option? \n"; //Corrected "Pick A Option" to "Pick An Option"
        ReadInLowerCase(User1Choice); //It correctly sets the string to the lowercase version meaning it works as a formatter.
        if (User1Choice != "rock" and User1Choice != "paper" and User1Choice != "scissor" and User1Choice != "scissors") // and checks if multiple are true, or checks if any are true //This cannot use or since it contradicts itself if one is true, when the varaible is equal to rock it is not equal to paper or scissor making it false.
        {
            cout << "Invaid Choice Try Again: (Pick Rock, Paper, or Scissor)\n";
        }
        else
        {
            break;
        }
        //cout << "Debug" << User1Choice << endl;
    }
    //-------------Clear-------------
    //system("pause"); //for debugging
    system("cls"); //clears the console so the second user cant see the first users choice

    //-------------User2-------------
    cout << "[Rock, Paper, Scissors]\n";
    string User2Choice;
    while (true)
    {
        cout << "User 2: Pick An Option \n"; //Corrected "Pick A Option" to "Pick An Option"
        ReadInLowerCase(User2Choice);
        if (User2Choice != "rock" and User2Choice != "paper" and User2Choice != "scissor" and User2Choice != "scissors")
        {
            cout << "Invaid Choice Try Again: (Pick Rock, Paper, or Scissor)\n";
        }
        else
        {
            break;
        }
        //cout << "Debug" << User2Choice << endl;
    }

    //-------------Result-------------
    
    cout << "Result: ";
    if (User1Choice == User2Choice)
    {
        cout << "Tie";
    }
    else if (User1Choice == "rock" and User2Choice == "scissors" or //Is there a way to make this more efficient?
             User1Choice == "rock" and User2Choice == "scissor" or 
             User1Choice == "scissor" and User2Choice == "paper" or 
             User1Choice == "paper" and User2Choice == "rock")
    {
        cout << "User 1 Wins";
    }
    else if (User2Choice == "rock" and User1Choice == "scissors" or
             User2Choice == "rock" and User1Choice == "scissor" or
             User2Choice == "scissor" and User1Choice == "paper" or
             User2Choice == "paper" and User1Choice == "rock")
    {
        cout << "User 2 Wins";
    }
    else;





}
