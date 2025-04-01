#include<iostream>
using namespace std;

int main(){

    int* pPointer= nullptr;
    int numbersArray[3]={10,20,30};

    //assigning address of the first element to the pointer
    pPointer=numbersArray;

    //output address of the first element
    cout<<"address at pPointer is: "<<pPointer<<endl;
    cout<<"address of numbersArray[0] is:"<<numbersArray<<endl;

    //output value of the first element using pointer and indirection
    cout<<"first element is: "<<*pPointer<<endl;

    //output value of second element
   cout<<"second element(element at ++pPointer) is:" <<*(++pPointer)<<endl;

   pPointer=numbersArray;

   cout<<"value at pPointer++ : "<<*pPointer++;
   return 0;
}