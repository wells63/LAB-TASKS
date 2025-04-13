
#include "Area.h"
#include <iostream>
using namespace SHAPES;
using namespace std;

int main() {
    int choice;
    do {
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Sqaure square;
                double sideLength;
                cout << "Enter the side length of the square: ";
                cin >> sideLength;
                square.setSideLength(sideLength);
                double area = Area::SquareArea(square);
                cout << "The area of the square is: " << area << endl<<endl;
                break;
            }
            case 2: {
                Triangle triangle;
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                triangle.setBase(base);
                triangle.setHeight(height);
                double area = Area::TriangleArea(triangle);
                cout<<"The area of the Triangle is: "<<area<<endl<<endl;
            }
            break;
            case 3:{

                Circle circle;
                double radius;
                cout << "Enter the radius of the Circle: ";
                cin >> radius;
                circle.setRadius(radius);
                double area = Area::CircleArea(circle);
                cout << "The area of the Circle  is: " << area << endl<<endl; 
            }
        }
    }while(choice !=4);

    return 0;
}