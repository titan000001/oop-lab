#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ifstream inputFile;

    inputFile.open("tawhid.txt");

    if (!inputFile.is_open()){
        cout << "error opening the file!" << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }
    
    inputFile.close();

    return 0;
}