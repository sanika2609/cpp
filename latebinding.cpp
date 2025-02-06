#include<iostream>
using namespace std;
class A{
    public:
  virtual  void show(){
        cout<<"\n base class";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"\n derived class";
    }
};
int main(){
    A* bptr;
    B aa;
    bptr=&aa;
    bptr->show();
    return 0;
}