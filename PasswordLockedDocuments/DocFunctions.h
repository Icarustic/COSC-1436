#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool UserLogin(string password);

vector <string> DisplayDocuments();

void SelectDocument();

bool DocumentLogin(string password);

void ReadInLowerCase(string& input);
