#include <bits/stdc++.h>
using namespace std;
int main() {
    int num =1;
    float frac = 1.5;
    char name = 'T';

    int *ptrNum= &num;
    float *ptrFrac = &frac;
    char *ptrName = &name;

    cout << "Adress of num :" << ptrNum << '\n';
    cout << "Adress of frac :" << ptrFrac << '\n';
    cout << "Adress of name : " << ptrName << '\n';
return 0;
}