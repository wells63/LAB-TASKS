#include<iostream>
#include "Rectangle.h"
using namespace std;
int main(){
    Rectangle rectangleOne;
    double length, width;
    cout<<"Enter length of rectangleOne :"<<endl;
    cin>>width;
    cout<<"Enter width of rectangleOne :"<<endl;
cin>>length; 
rectangleOne.setLength(length);
rectangleOne.setWidth(width);
cout<<"The area of reactangleone is : "<<rectangleOne.Area()<<endl<<endl;


cout<<"Enter length of rectangleTwo :"<<endl;
    cin>>width;
    cout<<"Enter width of rectangleTwo :"<<endl;
cin>>length; 
Rectangle rectangleTwo(width, length);
cout<<"The area of reactangleTwo is : "<<rectangleTwo.Area()<<endl<<endl;
return 0;
}