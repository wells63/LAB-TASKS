#include<iostream>
using namespace std;
int main(){
    //declaring a pointer and initialising it
    int* pPointer=nullptr;
    int integervar=5;

// assign pointer to addrress of object
    pPointer=&integervar;

    //output the value of integer
    cout<<"the value of integer is: "<<integervar;

    //output the address of integervar
    cout<<endl<<"the address of integervar is:"<<&integervar;

    //    output the address assigned to pPointer
    cout<<endl<<"the address assigned to pPointer is: "<<pPointer;

    //output the address of pPointer
    cout<<endl<<"the address of pPointer is: "<<&pPointer;
    return 0;
}