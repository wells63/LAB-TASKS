#include<iostream>
using namespace std;

int main(){
    int numbersArray[5];
    int* pPointer=nullptr;
    //assign address of the first element to the pointer
    pPointer=numbersArray;
    *pPointer=10;

    /* increment the pointer using arithmetic 
    to assign the address of the second element to the pointer
    */
   pPointer++;
   *pPointer=20;
  // assign the address of the third element to the pointer
  pPointer=&numbersArray[2];
  *pPointer=30;


//assign the address of the fourth element to the pointer using pointer arithmetic
pPointer=numbersArray+3;
*pPointer=40;

//assign the address of the first element to the pointer
pPointer=numbersArray;

/*assign the value to the fifth element using indirection  and pointer arithmetic */
*(pPointer+4)=50;
//ileterate and output all the elements
for (int i=0; i<5; i++)
cout<<numbersArray[i]<<endl;
return 0;

}