#include<iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
:length(0.0f),width(0.0f)
{
}
Rectangle::Rectangle(float newLength, float newWidth){
    length=newLength;
    width=newWidth;
}
Rectangle::~Rectangle(){}
 void Rectangle:: setLength(float newLength){ 
length=newLength;

}
void Rectangle:: setWidth(float newWidth){
    width=newWidth;
}
 float Rectangle:: getlength(){
return length;
}
float Rectangle:: getwidth(){
    return width;
    }
   float Rectangle::  Area(){
        float Area= length*width;
    return Area; 
    }







