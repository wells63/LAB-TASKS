#include<iostream>
using namespace std;

int main(){
   int x=3; 
   //the value of x is incremented after initialised to y
   //y gets initial value of x
   int y=x++;

   cout<<"x is: "<<x<<"\ny is: "<<y;// x=4 and y =3;
   return 0;
}