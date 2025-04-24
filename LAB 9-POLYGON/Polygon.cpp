#include<iostream>
#include "Polygon.h" 
void Polygon::SetValues(int width, int height) 
{ 
mWidth = width; 
mHeight = height; 
}
void Polygon::PrintArea() 
{ 
std::cout << this->Area() << '\n'; 
}
int Polygon::Area() 
{ 
   return 0; 
} 