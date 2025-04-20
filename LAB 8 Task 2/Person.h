#include<string>
using namespace std;
class Person{
public:
Person();
Person(float newWeight, string name);
~Person();
//Overload the add operator
float operator+(const Person& otherperson);
void setName(string newName);
void setWeight(float newW);
void setAge(int ag);

bool operator!=(const Person& otherperson);
bool operator<(const Person& otherperson );


//conversion type
operator int();
operator string();
operator float();
private:
float Weight;
string firstName;
int Age;

};