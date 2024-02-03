#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ofstream storeSquare("squares.txt");

    if (!storeSquare.is_open())
    {
        cout << "error opening this file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i <= 10 ; i++)
    {
        int square = i * i;
        storeSquare << square << endl;
    }

    storeSquare.close();

    ifstream readSquare("squares.txt");

    if (!readSquare.is_open())
    {
        cout << "Error opening this file for reading" << endl;
        return 1;
    }
    
    cout << "Contents of the squares.txt : " << endl;

int value;
while (readSquare>> value)
{
    cout << value << endl;
}

    
readSquare.close();    
}
