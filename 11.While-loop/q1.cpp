#include<bits/stdc++.h>
using namespace std;

int main(){
    int number;
    long long factorial = 1;

    cout << "Enter a positive number: " << endl;
    cin >> number;

    if (number < 0 )
    {
        cout << "Please enter a positive number.";
        return 1;
    }
    while (number > 0)
    {
        factorial = factorial * number;
        number--;
    }
    
    cout << "The factorial is " << factorial;

return 0;
}