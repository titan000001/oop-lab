#include<bits/stdc++.h> 
using namespace std;

int main(){
    int number;
    while(true)
    {
        cout << "Enter a number (-1 to exit)\n";
        cin >> number;
        if (number == -1)
        {
            break;
        }
        cout << "You entered " << number << ", Please enter -1\n";
    }
    return 0;
}