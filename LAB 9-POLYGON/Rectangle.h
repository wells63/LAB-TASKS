#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"
class Rectangle : public Polygon { 
public: 
int Area(); 
Rectangle(int width, int height);
}; 

#endif