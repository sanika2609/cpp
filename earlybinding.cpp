#include<iostream>
using namespace std;
class A{
    public:
    void show(){
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
    B aa;
    aa.show();
    aa.A::show();
    return 0;
}