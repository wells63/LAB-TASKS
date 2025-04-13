#include "Square.h"
using namespace SHAPES;

Sqaure::Sqaure()
:sideLength(0)
{}
Sqaure::Sqaure(double newSideLength){
    sideLength=newSideLength;
}
Sqaure::~Sqaure(){}
 double Sqaure:: getSideLength(){
return sideLength;
}
void Sqaure:: setSideLength(double length){
    sideLength= length;
}