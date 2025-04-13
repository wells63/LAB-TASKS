#include "Circle.h"
using namespace SHAPES;
Circle :: Circle()
:Radius(1),pi(3.14159)
{}

Circle::Circle(double NewRadius){
    Radius=NewRadius;
}
Circle::~Circle(){}


void Circle::setRadius(double newRdius){
Radius =newRdius;
}
double Circle::getRadius(){
    return Radius;
}