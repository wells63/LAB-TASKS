#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
using namespace SHAPES;

class Area{
    public:
    static double SquareArea(Sqaure& square);
    static double TriangleArea(Triangle& triangle);
    static double CircleArea(Circle& circle);
};