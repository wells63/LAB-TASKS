#include "Area.h"
#include<cmath>

double Area:: SquareArea(Sqaure& square){
return square.getSideLength()* square.getSideLength();
}

 double Area:: TriangleArea(Triangle& triangle){
double Triangle_Area= 0.5*triangle.getBase()* triangle.getHeight();
return Triangle_Area;
}
 double Area:: CircleArea(Circle& circle){
    return circle.getRadius()* circle.getRadius()* M_PI;

}