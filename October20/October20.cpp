// October20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <iostream>

int main()
{
    bool notdone = true;
    while (notdone) 
    {
        /*
        Global Variables
        */
        float volume;
        float area;
        float perimeter;
        /*
        Shape Prompt
        */
        std::string shape;
        std::cout << "What is your shape? (Only rectangle, circle, and cylinder are handled)\n";
        std::cin >> shape;
        /*
        Logic for rectangle option
        */
        if (shape == "rectangle" or shape == "Rectangle")
        {
            float width;
            float lenght;
            // std::cin >> lenght >> width //If you want the user to input both at the same time.
            std::cout << "Enter the width\n";
            std::cin >> width;
            std::cout << "Enter the lenght\n";
            std::cin >> lenght;
            area = lenght * width;
            perimeter = (2 * lenght) + (2 * width);

            std::cout << "Perimeter is " << perimeter << std::endl;
            std::cout << "Area is " << area << std::endl;
        }
        /*
        Logic for circle option
        */
        else if (shape == "circle" or shape == "Circle")
        {
            float radius;
            std::cout << "Enter the radius\n";
            std::cin >> radius;
            area = radius * 3.14;
            std::cout << "Area is " << area << std::endl;

        }
        /*
        Logic for cylinder option
        */
        else if (shape == "cylinder" or shape == "Cylinder")
        {
            //V = pie * r^2 * h
            float radius;
            float hieght;
            std::cout << "Enter the radius\n";
            std::cin >> radius;
            std::cout << "Enter the hieght\n";
            std::cin >> hieght;
            volume = 3.14 * pow(radius, 2) * hieght; //volume = 3.14 * (radius * radius) * hieght
            std::cout << "Volume is " << volume << std::endl;

        }
        /*
        Logic for unhandled options
        */
        else
        {
            std::cout << "That shape is not handled in this program, try again\n";
        }
        /*
        Prompt to continue or not
        */
        std::string cont;
        std::cout << "Continue the program? (yes/no)\n";
        std::cin >> cont;
        if (cont == "no" or cont == "No")
        {
            break;
        }
        else
        {
            system("cls");
        }
    }

}

