#include "Box.h"

int main(){
Box box1;
Box box2;
Box box3;
double volume=0.0;

box1.setLength(6.0); box1.setBreadth(7.0); box1.setHeight(5.0);
box2.setLength(12.0); box2.setBreadth(13.0); box2.setHeight(10.0);

//volume of box1
volume=box1.getVolume();
std::cout<<"Volume of box 1 is: "<<volume<<endl;

//volume of box2
volume= box2.getVolume();
std::cout<<"Volume of box 2 is: "<<volume<<endl;

box3= box1+box2;

//volume of box3
volume=box3.getVolume();
std::cout<<"Volume of box 3 is: "<<volume<<endl;
return 0;
}