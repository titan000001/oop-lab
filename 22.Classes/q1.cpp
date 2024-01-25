#include <iostream>
using namespace std;

class Circle
{
    private:
        double radius;
        const double PI = 3.14159;
    
    public:

    double setRadius(double r){
        if (r >= 0)
        {
            radius = r;
        }
        else
        {
            cout << "Radius is less than 0 , so defaulting to 0" << endl;
            radius = 0;
        }
    return radius;
    }

    double calculateArea(){
        return PI * radius * radius; 
    }
    
};

int main(){
    Circle myCircle;
    int rad;
    
    cout << "Enter the radius of the circle" << endl;
    cin >> rad;

    myCircle.setRadius(rad);

    cout << "The area of the circle is " << myCircle.calculateArea() << endl;
}