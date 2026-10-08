#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> UserLogin();

vector <string> DisplayDocuments();

string SelectDocument();

bool DocumentLogin(vector <string> CurrentLoginCredentials, string SelectedDocument);

void ReadInLowerCase(string& input);
