#include<iostream>
using namespace std;

class Person{
public:
    string name="sanika";
     void virtual display(){
    cout<<name;
   
    }
    };
    class Student:public Person{
    public:
    int Roll_no=15;
   void virtual  display(){
    cout<<Roll_no;
    }
    };
    int main(){
    Person p1;
    Student s1;
    Person *ptr;
    ptr=&s1;
    ptr->display();
    }
    
