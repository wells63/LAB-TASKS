#include<iostream>
using namespace std;

int main(){
    int* Ipointer=nullptr;
    string* Spointer =nullptr;
    //allocating memory
    Ipointer=new int;
    Spointer=new string;
cout<<"enter a number: ";
cin>>*Ipointer;
cout<<"Enter a word: ";
cin>>*Spointer;
cout<<"\n You entered number: "<<*Ipointer<<" and a word: "<<*Spointer;
return 0;
}