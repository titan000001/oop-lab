#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2;

    cout << "Enter the fist number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
        
    }
    
   
    cout << "The greatest Common Divisor is " << num1;
}