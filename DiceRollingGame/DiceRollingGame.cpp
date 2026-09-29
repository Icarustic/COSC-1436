// DiceRollingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//---Imports---
#include <random>
#include "Functions.h"
using namespace std;

int main()
{

    //---BluePrint---
    // 1. Make 2 Functions that Rolls 2 Dice (Implementing rand function twice using 2 constraints for each respective dice range)
    //    Function 1: Rolls a 20 sided dice, 
    //    Function 2: Rolls a 4 sided dice,
    //    Extra: Make a Function that accepts a value "N" to roll a dice of "N" number of sides.
    // 2. Make a loop:
    //    - That calls both dice rolling functions, (Add variables to store the result of each dice)
    //    - Checks if they both are 1 (ending the loop), 
    //    - Else it adds to a counter (amount of loop). (Add varible to store number of loops)
    // 3. Once both dice roll 1 the loop ends and it prints the count for the amount of loop it took.
    // 4. Reset variables, then run the game repeatedly and average out total amount of attempts. (Add variables to hold the total loops and #attempts)

    //---Variables---
    int Roll20Result = -1;
    int Roll4Result = -1;
    int LoopCounter = 0; 
    int NumberofGames = 100;
    double TotalLoopCounter = 0; //Using double instead of integer so it can be used to track average score
    srand(time(0)); //Call srand here instead of in the functions

    for (int i = 0; i < NumberofGames; i++) 
    {
        //---MainLoop---
        while (Roll20Result != 1 or Roll4Result != 1) //Why is it 'or' instead of 'and'? Treat 'and's as commas while 'or's are also?
        {
            Roll20Result = Roll20SidedDice();
            Roll4Result = Roll4SidedDice();
            LoopCounter++;
        }
        cout << "It took " << LoopCounter << " attempts" << endl;

        //system("pause");
        system("cls");


        //---Reset_Game---
        TotalLoopCounter = TotalLoopCounter + LoopCounter; //Adds the current games score to a total value that gets divided by the number of games played

        Roll20Result = -1;
        Roll4Result = -1;
        LoopCounter = 0;
    }

    //---Alternative---

    //while (true)
    //{
    //    while (Roll20Result != 1 or Roll4Result != 1) //Why is it 'or' instead of 'and'? Treat 'and's as commas while 'or's are also?
    //    {
    //        Roll20Result = RollAnyDice(20);
    //        Roll4Result = RollAnyDice(4);
    //        LoopCounter++;
    //    }
    //    cout << "It took " << LoopCounter << " attempts" << endl;


    //    //---Reset_Game---
    //    TotalLoopCounter = TotalLoopCounter + LoopCounter; //Adds the current games score to a total value that gets divided by the number of games played

    //    Roll20Result = -1;
    //    Roll4Result = -1;
    //    LoopCounter = 0;
    //    NumberofGames++;
    //    cout << "The Average is " << TotalLoopCounter / NumberofGames << endl; //Allows for real time Average Score that updates each game

    //    system("pause");
    //    system("cls");

    //}

    //---CalculateAverage---

    cout << "The Average is " << TotalLoopCounter / NumberofGames << endl; //At a 100 Games the statistical probability reaches closer to 1/80 chance for both dice to roll 1

} 


