#include "Person.h"
#include<string>
using namespace std;

Person::Person()
:firstName(" "),Weight(0.0f){}

Person::Person(float newWeight, string name){
    Weight=newWeight;
    firstName=name;
    
}

Person::~Person(){}
void Person::setName(string newName){
firstName=newName;
}
void Person::setWeight(float newW){
    Weight=newW;
    }
    void Person ::setAge(int ag){
        Age=ag;
    }

float Person::operator+(const Person& otherperson){
    Person person;
  

    return  person.Weight=this->Weight+otherperson.Weight;
}

bool Person:: operator!=(const Person& otherperson){
   
 
     return firstName==otherperson.firstName;
 }
bool Person:: operator<(const Person& otherperson ){
    return Age<otherperson.Age;
}

Person::operator int(){
    return Age;
}
Person::operator string(){
    return firstName;
}
Person::operator float(){
    return Weight;
}