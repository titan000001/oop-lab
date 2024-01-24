#include<bits/stdc++.h>
using namespace std;

int main(){
    int myArray[] = {1, 2, 3, 4, 5};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    int *ptrMyArray = myArray;

    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i << ": " << *ptrMyArray << endl;
        ++ptrMyArray;
    }
    
    return 0;
}