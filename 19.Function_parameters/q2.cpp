#include<iostream>
using namespace std;

double triangleArea(float base, float height){
    double area;
    area = 0.5 * base * height;
    return area;
}

int main(){
    float base;
    float height;

    cout << "Enter the base of the triangle : " << endl;
    cin >> base;

    cout << "Enter the height of the triangle : " << endl;
    cin >> height ;

    cout << "The area of the triangle is : " << triangleArea(base, height) << endl;

    return 0;
}