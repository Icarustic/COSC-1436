#include "Hangman.h"

std::vector <std::string> getDictionary(std::string filename)
{
    std::ifstream fin(filename);
    if (fin.is_open() == false)
    {
        std::cout << "File not Found\n";
        return {}; //Returns an empty array
    }
    std::vector <std::string> allWords;
    std::string CurrentWord;
    while (getline(fin, CurrentWord))
    {
        allWords.push_back(CurrentWord); 
    }
    fin.close();
    std::cout << "Number of words in the dictionary: " << allWords.size() << std::endl;
    return allWords;
}

std::string getRandomWord(std::vector<std::string> WordLibrary)
{
    std::mt19937 rng(std::random_device{}()); //Mersenne Twister engine, a better alternative to srand(time(0)) and rand() functions
    std::uniform_int_distribution<int> distribution(0, WordLibrary.size() - 1); //adds a range limit
    int randomIndex = distribution(rng); //Gets rng and pplies the range limit to get a random number
    std::string RandomWord = WordLibrary[randomIndex]; //Gets the random word from the dictionary
    return RandomWord;
}
