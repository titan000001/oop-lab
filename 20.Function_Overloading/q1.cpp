#include<iostream>
using namespace std;

int multiply(int x, int y){
    return x * y;
}

double multiply(double x, double y){
    return x * y;
}

int main(){
    cout << multiply (4, 4) << endl;
    cout << multiply (4.4, 4.4) << endl;
}