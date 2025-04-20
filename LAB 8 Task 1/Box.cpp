#include "Box.h"

Box::Box()
:length(0.0), breadth(0.0), height(0.0)
{}

Box::Box(const double newLength, const double newBredth, const double newHeight){
length=newLength;
breadth=newBredth;
height=newHeight;

}
Box::~Box(){}

double Box::getVolume(){
    return length*breadth*height;
}

void Box::setLength(double Nlength){
length=Nlength;
}

void Box::setBreadth(double Nbreadth){
breadth=Nbreadth;
}
void Box::setHeight(double Nheight){
height=Nheight;
}

Box Box:: operator + (const Box& b){
Box box;

box.length=this->length+b.length;
box.breadth=this->breadth+b.breadth;
box.height=this->height+b.height;
return box;
}
