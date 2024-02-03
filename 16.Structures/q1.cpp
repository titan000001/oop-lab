#include<iostream>
using namespace std;
    
struct Rectangle
    {
        double height;
        double width;
    };
    
int main(){

    Rectangle square;
    square.height = 5.5;
    square.width = 5.5;

    cout << "The height of the rectangle is " << square.height << endl;
    cout << "The width of the rectangle is " << square.width << endl;
    return 0;
}