#include <iostream>
using namespace std;

// Area of a square (one integer)
int area(int side) {
    return side * side;
}

// Area of a rectangle (two integers)
int area(int length, int width) {
    return length * width;
}

// Area of a circle (one float)
float area(float radius) {
    return 3.14f * radius * radius;
}

int main() {
    int s, l, w;
    float r;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Area of square = " << area(s) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle = " << area(l, w) << endl;

    cout << "\nEnter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << area(r) << endl;

    return 0;
}
