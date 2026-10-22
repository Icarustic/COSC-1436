// October22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map> //this is a data structure
int Month;
int Day;
int Year;
bool Leap;

int BirthMonth;
int BirthDay;
int BirthYear;
bool BirthLeap;

std::map<int, int> DaysperMonths =
{
    {1, 31}, // January
    {2, 28}, // Feburary //Add +1 exclusivly to feburary on leap days
    {3, 31}, // March
    {4, 30}, // April
    {5, 28}, // May
    {6, 30 }, // June
    {7, 31}, // July
    {8, 31}, // August
    {9, 30}, // September
    {10, 28}, // October
    {11, 30}, // November
    {12, 31}, // December

};

// A userdefined function
bool Valid_Date(int Month, int Day, int Year, bool Leap)
{
    //Checks Month
    if (Month > 13 or Month < 1)
    {
        std::cout << "Invalid Month\n";
        return false;
    }
    else
    {
        //Determines MaxDay Limit
        //std::cout << "Month" << Month << std::endl;
        //std::cout << "Day" << Day << std::endl;
        //std::cout << "Leap" << Leap << std::endl;

        int MaxDay;
        if (Month == 2 and Leap == true) //Checks if the month is feburary and its a leap year adding 1 to the number of days of the month
        {
            MaxDay = DaysperMonths[Month] + 1;
            std::cout << "DaysMax" << MaxDay;
        }
        else
        {
            MaxDay = DaysperMonths[Month];
            std::cout << "DaysMax" << MaxDay;
        }

        //Checks Day
        if (Day < 1 or Day > MaxDay)
        {
            std::cout << "Invalid Day\n";
            return false;
        }
        else
        {
            //Checks Year
            if (Year < 1909 or Year > 2026) //Prevent values outside of a possible rangle
            {
                std::cout << "Invalid Year\n";
                return false;
            }
            else
            {
                std::cout << "Valid";
                return true;
            }
        }
    }
}

int Calculate_Age(int BirthMonth, int BirthDay, int BirthYear, bool BirthLeap, int Month, int Day, int Year, bool Leap)
{
    int AgeYear = Year - BirthYear;
    //int AgeMonth = (12 - Month) + (BirthMonth - 12);
    int AgeMonth = (BirthMonth - Month + 12) % 12;  //Bm = 6, M = 6; 6-6 = 0 + 12 % 12 = 0 so it correctly calculates the months while accounting for wrap around, the logic however is lost on me.
    std::cout << "Years" << AgeYear << "Months" << AgeMonth;
    return 0;
}

int main()
{
    /*------InClass Lab 11-------*/
    std::cout << "What is the current date? (Integers) (Month, Day, Year)\n";
    std::cin >> Month >> Day >> Year;
    //std::cout << Month << std::endl << Day << std::endl << Year << std::endl; //Works

    std::cout << "Is it a leap year?(Yes/No)\n"; //If current year is leap your count feburary as +1 days during calculations
    std::string Result1;
    std::cin >> Result1;
    if (Result1 == "Yes" or Result1 == "yes")
    {
        Leap = true;
        //std::cout << Leap;
    }
    else
    {
        Leap = false;
        //std::cout << Leap;
    }
  
    std::cout << Valid_Date(Month, Day, Year, Leap);

    std::cout << "What is the date of your birth? (Month, Day, Year)\n";
    std::cin >> BirthMonth >> BirthDay >> BirthYear;

    std::cout << "Is it on a leap year?(Yes/No)\n";
    std::string Result2;
    std::cin >> Result2;
    if (Result2 == "Yes" or Result1 == "yes")
    {
        BirthLeap = true;
    }
    else
    {
        BirthLeap = false;
    }

    std::cout << Valid_Date(BirthMonth, BirthDay, BirthYear, BirthLeap);

    Calculate_Age(BirthMonth, BirthDay, BirthYear, BirthLeap, Month, Day, Year, Leap);

    




    /*
    //std::vector<
    //monthlist[0] = varibale 

    std::map<std::string, int> monthToDays =
    {
        {"January", 31},
        {"Feburary", 28}, //How to account for leap year? just add +1 when checking limit?
        {"March", 31},
        {"April", 30}
    };

    std::cout << "The number of days in this month is " << monthToDays["January"] << std::endl;
    */

    /*
    //this is how you print the data in a map
    for (std::pair<std::string, int> currentPair : monthToDays) //range-based for loop 
    {
        std::cout << currentPair.first << " has this many days: " << currentPair.second << std::endl; 
    }
    */

    /* //Similar to pair but allows for more than 2 values stored
   std::tuple<int, double, char> someTuple =
   {
       12, 3.14, 'a'
   };

   std::cout << someTuple
   */
    


}
