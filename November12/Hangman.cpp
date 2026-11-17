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
    //std::cout << "Number of words in the dictionary: " << allWords.size() << std::endl;
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

void findAndReplace(std::string& placeholder, std::string wordToGuess, char chracterToSearchFor)
{
    for (int location = 0; location < wordToGuess.size(); location++)
    {
        if (wordToGuess[location] == chracterToSearchFor)
        {
            std::cout << "Was a letter in the word\n";
            placeholder[location] = chracterToSearchFor;
        }
        else
        {
            std::cout << "Guess was not a letter in the word\n";
        }
    }
    std::cout << "The updated placeholder is: " << placeholder << std::endl;
}

std::string generatePlaceholder(std::string wordToGuess)
{
    std::string generatedplaceholder;
    for (int i = 0; i < wordToGuess.size(); i++)
    {
        generatedplaceholder.push_back('*');
    }
    return generatedplaceholder;
}

void playHangman()
{
    // 1. Get all of the dictionary words,
    // 2. Prompt the user to to guess the letters in the word.
    std::vector <std::string> WordLibrary = getDictionary("dictionary.txt");
    std::string wordToGuess = getRandomWord(WordLibrary);
    std::string placeholder = generatePlaceholder(wordToGuess);

    int currentguesses = 0;
    int maxguesses = 5;

    std::cout << "Your word to Guess is: " << placeholder << std::endl;
    std::cout << "Debug Word: " << wordToGuess << std::endl;
    // Game loop (runs until the user either guesses the word or fails to do so in a certian amount of moves.)
    while (placeholder != wordToGuess and currentguesses <= maxguesses)
    {
        // Prompt user for a guessed charecter and inform them if they were correct
        char guessedCharecter;
        std::cout << "Guess a letter " << std::endl;
        std::cin >> guessedCharecter; // >>, input operator (Stream Extraction Operator)

        //std::string::find  //size_t is another name for a positive integer... a long long integer.
        findAndReplace(placeholder, wordToGuess, guessedCharecter);
        //currentguesses++;
    }

    if (currentguesses > maxguesses)
    {
        std::cout << "You lost\n";
    }

}

void DisplayGame()
{
    std::vector <std::string> WordLibrary = getDictionary("dictionary.txt");

    //Try to replace the vectors for strings instead and print them in parts to print spaces imbetween for the progression word

    // 1. String that stores the word randomly chosen.
    std::string ActualWord = getRandomWord(WordLibrary);

    // 2. String that stores the users progress to the actual word.
    std::string GuessedWord;
    for (int i = 0; i < ActualWord.size(); i++)
    {
        GuessedWord.push_back('_');
    }

    //Display ActualWord
    std::cout << "Actual Word: " << ActualWord << std::endl;

    //Display ProgressionWord with spaces
    std::cout << "Your word to guess is: \n";
    for (int i = 0; i < GuessedWord.size(); i++)
    {
        std::cout << GuessedWord[i] << " "; //How would you space it apart for phrases rather than words, so it can group words together and include additional space between them
    }
    std::cout << std::endl;

    int GuessChances = ActualWord.size(); //should work for the vast majority since a word containing a unique charecter in every space will be possible.

    while (GuessedWord != ActualWord and GuessChances > 0)
    {
        std::cout << "Guess a letter:";
        char Guess;
        std::cin >> Guess;
        GuessChances--;

        fillIn(GuessedWord, ActualWord, Guess);

    }
    if (GuessedWord == ActualWord)
    {
        std::cout << "You win\n";
    }
    if (GuessChances <= 0)
    {
        std::cout << "You lost\n";
    }
}

void fillIn(std::string& GuessedWord, std::string ActualWord, char Guess)
//add a return type for the number of guesses left so it can check whenever they guess incorrectly and penalize them, otherwise it lets them continue to guess
{
    for (int i = 0; i < ActualWord.size(); i++)
    {
        if (ActualWord[i] == Guess)
        {
            GuessedWord[i] = Guess;
        }
    }
    for (int i = 0; i < GuessedWord.size(); i++)
    {
        std::cout << GuessedWord[i] << " "; 
    }
    std::cout << std::endl;
}