#include<cmath> // This is a library that allows you to use math functions like pow(), sin(), cos(), etc.
#include<iostream> 
#include<string>
#include<algorithm>
#include<iomanip>
#include<Windows.h>
// We are going to write to an Output file here. Saving our results to a file.
#include<fstream> // f stands for file.
#include<iostream> // io stands for input/output.

void demoGetline()
{
}

using namespace std;

int main()
{
    
    SetConsoleOutputCP(CP_UTF8); //Neccesary to Allow the .txt to properly use and print commas and apostraphes. Otherwise the charecters become scrambled

    string line;
    int counter = 0;

    ifstream fin("EastSideLyrics.txt"); //Debugging to ensure file is found
    if (fin.is_open() == false) //if the file was not found or opened
    {
        cout << "File was not found\n";
        return -1; // early return
    }
    cout << "File was found\n";

    // -- Print First 10 Lines --

    for (int i = 1; i <= 10; ++i) //Counts from 1-10 incremently //How do I exclude lines that are blank spaces however?
    {
        //string lines10;
        getline(fin, line);
        cout << line << endl;
        if (line == "") --i; //since the for loop has its own counter you subtract by one from it for every blank line so it is able to print 10 total actual lines
    }
    cout << "10 Lines Printed, Press Enter to Continue\n";
    system("pause");
    system("cls");
    fin.clear(); //Reset Button
    fin.seekg(0); //Recalibrate to 0
    //string allline;

    // -- Print All Lines --

    while (getline(fin, line))
    {
        cout << line << endl;
        if (line == "") continue; // Excludes the blank lines from the counter //continue is similar to skip //Still prints blank lines but they are excluded in the counter
        ++counter;
    }

    // -- Print Line Count --

    cout << "Total Lines: " << counter; // correctly prints total number of lines, in Sandman total is 35 - 5 = 30 to exclude blank lines
}