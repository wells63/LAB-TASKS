#include "Person.h"
#include<iostream>
#include<string>
using namespace std;

int main(){

Person jane(60.0f,"jane");
Person john(75.0f,"john");
jane.setAge(40);
john.setAge(50);
float totalWeight=jane +john;
cout<<"The total weight :"<<totalWeight<<endl;

if(jane!=john)
cout<<"jane and john are equal names "<<endl;
else{
cout<<"jane and john are not equal names"<<endl;
}


if(jane<john){
    cout<<"jane is younger than john"<<endl;
}
else{
    cout<<"jane is older than john"<<endl; 
}


int johnAge=john;
cout<<"john's Age: "<<johnAge<<endl;

string janeFirstName=jane;
cout<<"jane's FirstName: "<<janeFirstName<<endl;

float janeWeight=jane;
cout<<"jane's Wieght: "<<janeWeight<<endl;
return 0;

}