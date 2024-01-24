#include <iostream>

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle() : radius(0.0) {}

    // Setter for radius
    void setRadius(double r) {
        radius = (r >= 0.0) ? r : 0.0;
    }

    // Getter for radius
    double getRadius() const {
        return radius;
    }

    // Calculate and return the area
    double calculateArea() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Create a Circle object
    Circle myCircle;

    // Set the radius
    myCircle.setRadius(5.0);

    // Get the radius and calculate the area
    std::cout << "Radius: " << myCircle.getRadius() << std::endl;
    std::cout << "Area: " << myCircle.calculateArea() << std::endl;

    return 0;
}
