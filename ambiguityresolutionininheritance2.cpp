#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void input(){
        cout<<"Enter value of a";
        cin>>a;
    }
    void display(){
        cout<<"\n a="<<a;
    }
};
class B{
    protected:
    int b;
    public:
    void input(){
        cout<<"Enter value of b";
        cin>>b;
    }
    void print(){
        cout<<"\n b="<<b;
    }
};
class C:public A,public B{
    int c;
    public:
    void getdata(){
        cout<<"Enter value of c";
        cin>>c;
        A::input();
        B::input();
    }
    void show(){
        cout<<"\n c="<<c;
    }
};
int main(){
    C aa;
    aa.getdata();
    aa.display();
    aa.print();
    aa.show();
    return 0;
}