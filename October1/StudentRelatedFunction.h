#pragma once
#include <iostream>
#include <string>
#include <vector>
// Need a list of strings, use vector each to seperate strings rather than using a single long string.
// Vector is a list that can grow and shrink. 

using namespace std;

vector <string> getAllStudentNames(string filename); // vector <string> -> vector of string, angle brackets are neccessary to specify the type of data that will be stored in the vector.

string getLongestName(vector <string> names); 

void demoASimpleArray();
