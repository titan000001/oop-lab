#include<iostream>
using namespace std;

int GCD(int num1, int num2){
    if(num2 == 0){
        return num1;
    }
    else{
        return GCD(num2 , num1 % num2);
    }
}

int main(){
    int num1;
    int num2;

    cout << "Enter the first number : " << endl;
    cin >> num1;

    cout << "Enter the second number : " << endl;
    cin >> num2;

    cout << "The GCD of " << num1 << " and " << num2 << " is " << GCD(num1, num2);

    return 0;
}
