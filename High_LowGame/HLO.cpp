#include "HLO.h"
#include <iostream> //Overkill but it also includes rand and time 

using namespace std;

int getRandomNumberBetween0AndN(int N)
{
    //This is the Body (or Definition) of the function
    srand(time(0)); //generates a random seed helping the random number reset each time the application runs

    int randomNumber = rand() % N; //Can use (rand() % N) + 1 to make the range 1 - N, change names to Between1AndN aswell 

    return randomNumber; //Note that .cpp files needs a return to work
} //end of this function

int getUserGuess() //dosent reqiure any inputs, Instead of writing this all in the main.cpp you write it here so its modular and recallable
{
    cout << "Enter your guess:\n";
    int userGuess; // variables decleration (not assignned since we immediently set it here depending on the response)
    cin >> userGuess; //or use getline

    return userGuess;
}