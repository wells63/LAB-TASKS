#include<iostream>
using namespace std;

int main(){
    int firstval; int secondval;

    int* pPointer=nullptr;
    //assign  pointer with the address of the firstval variab
    
    pPointer=&firstval;
    *pPointer=10;

    pPointer=&secondval;
    *pPointer=20;

    cout<<"firstvalue is: "<<firstval<<"\nsecond value is: "<<secondval;

return 0;
}

