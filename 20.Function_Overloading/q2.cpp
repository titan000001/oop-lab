#include<iostream>
using namespace std;

double area(double length , double width){
    double area;
    area = length * width;
    return area;
}

double area(double radius){
    double area;
    area = 3.14159 * (radius * radius);
    return area;
}

int main(){
    cout << "area of a rectangle of height and width of 5 and 6 is : " << area(5,6) << endl;
    cout << "are of a circle of radius 5 is : " << area(5) << endl;

return 0;
}