#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
    Example that reads in names and ages from two files and outputs them to an output file
*/
int main()
{
    ifstream nameFile;
    ifstream ageFile;
    ofstream outFile;

    string tempName;
    int tempAge;

    nameFile.open("names.txt");
    ageFile.open("ages.txt");
    outFile.open("output.txt");

    // if files did not open correctly return 1 to main to show an error
    if (!nameFile || !ageFile) {
        cout << "Problem opening... Aborting" << endl;
        return 1;
    }

    // while files still ahve more to input then take in the names and ages
    while (!nameFile.eof() && !ageFile.eof()) {
        getline(nameFile, tempName);
        ageFile >> tempAge;
        outFile << tempName << " " << tempAge << endl;
    }

    // close all files
    nameFile.close();
    ageFile.close();
    outFile.close();
}
