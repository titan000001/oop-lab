#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ofstream outputFile("squares.txt");

    if(!outputFile.is_open()){
        cout << "error opening this file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i <= 10 ; i++)
    {
        int square = i * i;
        outputFile << square << endl;
    }
    
    outputFile.close();

    ifstream inputFile("squares.txt");

    if (!inputFile.is_open())
    {
        cout << "Error opening this file for reading!" << endl;
        return 1;
     }
    
    cout << "Contents of the squares.txt : " << endl;

int value;
while (inputFile >> value)
{
    cout << value << endl;
}

inputFile.close();
}

