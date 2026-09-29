#include "Functions.h"
#include <iostream>

using namespace std;

int Roll20SidedDice()
{
    //srand(time(0)); //Calling srand in functions is problamatic
    int Roll20 = (rand() % 20) + 1; //Range 1 - 20, Uses + 1 to exclude 0 as dice do not roll 0
    cout << "D20 rolled " << Roll20 << endl;
    return Roll20;
}

int Roll4SidedDice()
{
    int Roll4 = (rand() % 4) + 1; //Range 1 - 4, Uses + 1 to exclude 0 as dice do not roll 0
    cout << "D4 rolled " << Roll4 << endl;
    return Roll4;
}

int RollAnyDice(int N) 
{
    int RollResult = (rand() % N) + 1; //Range 1 - N, Uses + 1 to exclude 0 as dice do not roll 0
    cout << "D" << N << " rolled " << RollResult << endl;
    return RollResult;
}