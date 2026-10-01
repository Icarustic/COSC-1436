#include "DocFunctions.h"
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;

bool UserLogin()
{
    return 0;
}

vector <string> DisplayDocuments()
{
    filesystem::path VCurrentProjectPath = filesystem::current_path();

    filesystem::path VDocumentFolderPath = VCurrentProjectPath / "Documents";

    vector <string> FileList;

    for (const auto& Ventry : filesystem::directory_iterator(VDocumentFolderPath)) // entry (temp variable, same as thing), auto& (determines the file type and & helps the computer quickly check the file), const (constant makes it so the values arent changed: It is EXTRA but just protects it from being changed)
    {
        string FileName = Ventry.path().filename().string(); //.filename only works on .path formats so you have to translate the fraction of the directory you got into a path to use the function on it. // .filename writes the name of the file // .string just removes the qoutes around the result to make it just text
        cout << FileName << endl;

        FileList.push_back(FileName); //Appends the filename to the vector/array
    }

    return FileList;

}
