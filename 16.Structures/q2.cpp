#include<iostream>

struct Point {
    int x, y;
};

void print_point(Point p) {
    std::cout << "Point: (" << p.x << ", " << p.y << ")" << std::endl;
}

// Usage
int main() {
    Point p = {1, 2};
    print_point(p);
    return 0;
}
