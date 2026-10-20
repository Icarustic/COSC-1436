// October20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>


int main()
{
    ///*------While loops and playing with ASCII characters_Lab------*/
    //char userinput;

    //std::cout << "Enter a charecter ('a', '$', etc)" << std::endl; //Use vector to track all the charecters the user inputs

    //std::cin >> userinput;

    //std::vector <char> userinputlist =
    //{
    //};

    //int userinputcounter = 0;
    //while (userinput != 'q') //keeps going until they enter quit = q
    //{
    //    userinputlist.push_back(userinput);
    //    std::cin >> userinput;
    //    userinputcounter++; // adds one to the number of charecters the user inputs
    //}

    //std::cout << "You entered this many inputs/charcters: " << userinputcounter << std::endl;

    //std::cout << "The final charcter you input was: " << userinput << std::endl;

    /*------Part_2------*/

    //for (char currentletter = 'a'; currentletter <= 'z'; currentletter++) //currentletter+=2, Makes a incremental counter to list all of the alphabets using the ASCI table ordering. (Each char has a equivilent number value and char just translate between the number and alphabet)
    //{
    //    std::cout << currentletter;
    //}

    SetConsoleOutputCP(CP_UTF8);

    for (int i = 65; i <= 90; i++) //currentletter+=2, Makes a incremental counter to list all of the alphabets using the ASCI table ordering. (Each char has a equivilent number value and char just translate between the number and alphabet)
        {
            std::cout << char(i) << "";
        }

    //std::cout << "a" << std::endl;
    //std::cout << "b" << std::endl;
    //std::cout << "c" << std::endl;
   

    //for (piece1; piece2; piece3)






    ///*-----In Class Lab 9------*/
    //bool notdone = true;
    //while (notdone) 
    //{
    //    /*
    //    Global Variables
    //    */
    //    float volume;
    //    float area;
    //    float perimeter;
    //    /*
    //    Shape Prompt
    //    */
    //    std::string shape;
    //    std::cout << "What is your shape? (Only rectangle, circle, and cylinder are handled)\n";
    //    std::cin >> shape;
    //    /*
    //    Logic for rectangle option
    //    */
    //    if (shape == "rectangle" or shape == "Rectangle")
    //    {
    //        float width;
    //        float lenght;
    //        // std::cin >> lenght >> width //If you want the user to input both at the same time.
    //        std::cout << "Enter the width\n";
    //        std::cin >> width;
    //        std::cout << "Enter the lenght\n";
    //        std::cin >> lenght;
    //        area = lenght * width;
    //        perimeter = (2 * lenght) + (2 * width);

    //        std::cout << "Perimeter is " << perimeter << std::endl;
    //        std::cout << "Area is " << area << std::endl;
    //    }
    //    /*
    //    Logic for circle option
    //    */
    //    else if (shape == "circle" or shape == "Circle")
    //    {
    //        float radius;
    //        std::cout << "Enter the radius\n";
    //        std::cin >> radius;
    //        area = radius * 3.14;
    //        std::cout << "Area is " << area << std::endl;

    //    }
    //    /*
    //    Logic for cylinder option
    //    */
    //    else if (shape == "cylinder" or shape == "Cylinder")
    //    {
    //        //V = pie * r^2 * h
    //        float radius;
    //        float hieght;
    //        std::cout << "Enter the radius\n";
    //        std::cin >> radius;
    //        std::cout << "Enter the hieght\n";
    //        std::cin >> hieght;
    //        volume = 3.14 * pow(radius, 2) * hieght; //volume = 3.14 * (radius * radius) * hieght
    //        std::cout << "Volume is " << volume << std::endl;

    //    }
    //    /*
    //    Logic for unhandled options
    //    */
    //    else
    //    {
    //        std::cout << "That shape is not handled in this program, try again\n";
    //    }
    //    /*
    //    Prompt to continue or not
    //    */
    //    std::string cont;
    //    std::cout << "Continue the program? (yes/no)\n";
    //    std::cin >> cont;
    //    if (cont == "no" or cont == "No")
    //    {
    //        break;
    //    }
    //    else
    //    {
    //        system("cls");
    //    }
    //}

}

