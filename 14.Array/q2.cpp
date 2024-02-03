#include<iostream>
using namespace std;

int main(){
    const int size = 10;
    int evenNumbers[size];
    cout << "The first 10 even numbers are: ";
    for (int i = 0; i < size; ++i)
    {
        evenNumbers[i] = 2 * (i + 1);
        cout << evenNumbers[i] << " ";
    }
    
    return 0;
}