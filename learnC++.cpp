#include <iostream>
#include<string>
using namespace std;
class Employee{
public:
    string name;
    int age;

    Employee(){
        name="pranv";
        age=24;
    }
    Employee(string n, int a){
        name=n;
        age=a;

    } 
    string getName(){
        cout<<name<<endl;
    }
    int getAge(){
        cout<<age<<endl;
    }
};
class student:public Employee{
    int gradyear;
    int getYear(){
        gradyear=2028;
    }
};

int main(){
    Employee e1;
    Employee e2("priya",34);
    e1.getAge();
    e1.getName();
    e2.getName();
    e2.getAge();

    return 0;
}

   

