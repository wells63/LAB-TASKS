#include "Triangle.h"
using namespace SHAPES;

Triangle::Triangle()
:Base(0),Heigth(0)
{}

Triangle::Triangle(double newBase, double newHeigth){
    Base=newBase; Heigth=newHeigth;
}
Triangle::~Triangle(){}
double Triangle:: getBase(){
    return Base;
}
        double  Triangle:: getHeight(){
            return Heigth;
        }

        void Triangle:: setBase(double base){
            Base=base; 
        }
        void Triangle :: setHeight(double height){
            Heigth=height;
        }

