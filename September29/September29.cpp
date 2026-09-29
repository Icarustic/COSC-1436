// September29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h> //Adds "Sleep" Function (operation setting header file)

using namespace std;
int main()
{
    int countdownValue = 10;
    while (countdownValue > 0)
    {
        //Body of Loop
        countdownValue--; //Does the same thing as countdownValue = countdownValue - 1; //Decrementing

        Sleep(1'000); //Unit is specified as MilliSeconds

        cout << countdownValue << "..." << endl;
    }
 system("finalCountdown.wav");//Play/Open a file,etc
}

