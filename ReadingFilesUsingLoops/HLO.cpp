
#include "HLO.h"
#include <iostream> //Overkill but it also includes rand and time 


int getRandomNumberBetween0AndN(int N)
{
    srand(time(0)); //generates a random seed helping the random number reset each time the application runs

    int randomNumber = rand() % N; //Can use (rand() % N) + 1 to make the range 1 - N, change names to Between1AndN aswell 

    return randomNumber; //Note that .cpp files needs a return to work
}