#include<iostream>

struct Point {
    int x, y;
};

void print_point(Point p) {
    std::cout << "Point: (" << p.x << ", " << p.y << ")" << std::endl;
}

int main() {
    Point p;
    p.x = 3;
    p.y = 4;
    print_point(p);
    return 0;
}
