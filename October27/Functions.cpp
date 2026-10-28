#include "Functions.h"
#include <iostream>
#include <string>
#include <vector>

bool isPalindrome(string Word)
{
    string palindrome = Word;//Palindrome example
    vector <char> DeconstructedWord =
    {

    };
    for (int i = 0; i < palindrome.size(); i++) //note: its > not >= due to working with vectors
    {
        DeconstructedWord.push_back(palindrome[i]); //Interesting by default strings are treated as a vector of charecters.
        cout << palindrome[i];
    }
    cout << " NormalWord\n";

    string ReverseWord;
    for (int i = palindrome.size() - 1; i >= 0; i--) //note: have to subtract the size of the vector by 1 since size counts the amount of charecters.
    {
        ReverseWord += DeconstructedWord[i];
        cout << DeconstructedWord[i];
    }
    cout << " ReverseWord\n";

    //cout << ReverseWord;
    if (ReverseWord == palindrome)
    {
        //cout << "Its true";
        return 1;
    }
    else if (ReverseWord != palindrome)
    {
        //cout << "Its false";
        return 0;
    }
}
