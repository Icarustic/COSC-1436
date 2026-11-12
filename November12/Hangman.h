#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <random>

std::vector <std::string> getDictionary(std::string filename);

std::string getRandomWord(std::vector <std::string> WordLibrary);