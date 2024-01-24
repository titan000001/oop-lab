#include<bits/stdc++.h>
using namespace std;

double circleArea(double radius){
    double area;
    const float pi = 3.14159;
    area = pi * (radius * radius);

    return area;
}

int main(){
    double radius;

    cout << "Enter the radius of the circle" << endl;
    cin >> radius;

    cout << "\n The area of the circle is : " << circleArea(radius);

    return 0;
}