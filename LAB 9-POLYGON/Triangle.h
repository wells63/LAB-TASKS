#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
class Triangle : public Polygon { 
public: 
int Area(); 
Triangle(int width, int height);
}; 
#endif