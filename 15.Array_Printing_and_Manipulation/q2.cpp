#include<bits/stdc++.h>
using namespace std;

int main(){
    int size = 6;
    string name = "Tawhid";

    cout << "The array is " << name ;

    char toChange= 'w';
    char replacement = 'u';

    for (char& c : name){
    if (c == toChange)
    {
        c = replacement;
    }
    
    }

    cout << "\nThe replaced string is " << name;
    return 0;
    }
