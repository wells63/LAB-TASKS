#include<iostream>
using namespace std;
 class Box{
public:
Box();
Box(const double newLength, const double newBredth, const double newHeight);
~Box();
double getVolume();
void setLength(double Nlength);
void setBreadth(double Nbreadth);
void setHeight(double Nheight);

//Overload + operator to add two Box objects
Box operator +(const Box& b);

private: 
double length;
double breadth;
double height;



 };