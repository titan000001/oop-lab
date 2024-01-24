#include<iostream>
using namespace std;

int max(int num1, int num2){
    if (num1 > num2)
    {
        cout <<"Bigger number is : " << num1;
    }
    else if (num2 > num1)
    {
        cout <<"Bigger number is : " << num2;
    }
    else
    {
        cout << "Both numbers are equal";
    }
    
}
int main(){
    int num1;
    int num2;

    cout << "Enter you first number: "<< endl;
    cin >> num1;

    cout << "Enter your second number :" << endl;
    cin >> num2;

    max(num1, num2);
    
    return 0;
}