#include <iostream> 
#include "Rectangle.h"
#include "Triangle.h" 
using namespace std; 
#include <iostream> 
#include "Rectangle.h" 
#include "Triangle.h" 
using namespace std; 
 
int main()  
{ 
Polygon* pPoly1 = new Rectangle(4,5); 
Polygon* pPoly2 = new Triangle(4,5); 
pPoly1->PrintArea(); 
pPoly2->PrintArea(); 
delete pPoly1; 
delete pPoly2; 
 
return 0; 
}