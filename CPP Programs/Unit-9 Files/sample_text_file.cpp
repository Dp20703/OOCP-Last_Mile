#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string inputLine, outputLine; // simple variable for input and output value storage

    ofstream entryFile("Student.txt"); // create/open file

    // input code:
    cout << "Input:-" << endl;
    while (true)
    {
        // cin >> inputLine;
        getline(cin, inputLine);
        if (inputLine == "End")
            break;
        entryFile << inputLine; // writing to entryFile
    }
    entryFile.close();
    // output code:
    cout << "Output:";
    ifstream DisplayFile("Student.txt"); // open/read file

    // display
    while (!DisplayFile.eof())
    {
        DisplayFile >> outputLine;
        cout << outputLine << "\n";
    }
    DisplayFile.close();

    return 0;
}