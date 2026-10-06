// PasswordLockedDocuments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem> //needed to check folders since ifstream cannot check folders.
#include <fstream>

#include "DocFunctions.h"

using namespace std;

int main()
{
    ////-Confirming if files could be found, does not work for those inside folders, path needs to be included-
    //ifstream fin("TestFile.txt"); //The problem was that I had named the file File3.txt and not just File3
    //    if (fin.is_open() == false) //if the file was not found or opened
    //    {
    //        cout << "File was not found\n";
    //        return -1; // early return
    //    }
    //cout << "File was found\n";

    //------BluePrint------
    // 1. Prompt for user login (password)
    // 2. If correct display a list of documents, and ask the user to select one
    // 3. Else if user login (password) is incorrect 3 times, end the program.
    // 4. Prompt for the password to unlock the selected document (password)
    // 5. If the password is correct, display the document content;
    //   ^ Document Folder: Mp4, Vedio, Txt, PDF, Png.
    // 6. Else if the password is incorrect, either ask for user login again or inform that they must wait before trying again.

    //------Functions------
    // 1. ☐ Function: UserLogin - Bool // Create a Username and Password
    // 2. ☑  Function: DisplayDocuments - Vector <string> //How would I list the names of each files? / I could do it manually but that wouldnt be effecient / I was thinking to use a vector to store each file name but im not sure how you can append each item and keep it updated.
    // 3. ☑  Function: SelectADocument 
    // 4. ☐ Function: DocumentLogin - Bool // Asks for the User Password again (//Where would I store the passwords for each document, becuase im not sure if .mp4 files can contain that information? Do I just ask for the user login password again?)

    //------Variables------  (Include V infront of all variables for easier reading)

    //auto variable = 123; // auto -> automaticly specifies the data type of the variable based on the value assigned to it. (int in this case)

    //auto currentPath = filesystem::current_path(); //:: means scope resolution operator 

    //cout << currentPath << endl;

    //auto VDirectoryIterator = filesystem::current_path();

    //for (auto Vthing : VDirectoryIterator)
    //{
    //    cout << Vthing.filename() << endl;
    //}


    //filesystem::path VCurrentProjectPath = filesystem::current_path(); 

    //filesystem::path VDocumentFolderPath = VCurrentProjectPath / "Documents";

    ////cout << "Listing files inside: " << DocumentFolderPath << endl; //Lists the path, a path is a list of directories, inside each directory is files.

  


    ////auto directoryIterator = filesystem::directory_iterator(currentPath); //This is a list of all the files in the current directory.

    //for (const auto& Ventry : filesystem::directory_iterator(VDocumentFolderPath)) // entry (temp variable, same as thing), auto& (determines the file type and & helps the computer quickly check the file), const (constant makes it so the values arent changed: It is EXTRA but just protects it from being changed)
    //{
    //    cout << Ventry.path().filename().string() << endl; //.filename only works on .path formats so you have to translate the fraction of the directory you got into a path to use the function on it. // .filename writes the name of the file // .string just removes the qoutes around the result to make it just text
    //} //This does list the files like how I wanted, do I need to assign its results into a vector?

    

    vector <string> VCurrentDocumentList = DisplayDocuments();  //Can work stand alone but changed to work more like a definition.

    for (int index = 0; index < VCurrentDocumentList.size(); index++)
    {
        cout << VCurrentDocumentList[index] << endl;
    }//Lists the available documents

    SelectDocument();
      

 
}
