#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    A(int x){
        a=x;
    }
    void display(){
        cout<<"\n a="<<a;
    }
};
class B{
    protected:
    int b;
    public:
    B(int y){
        b=y;
    }
    void print(){
        cout<<"\n b="<<b;
    }
};
class C:public A,public B{

    int c;
    public:
    C(int p,int q,int r):A(p),B(q){
        c=r;
    }
    void putdata(){
        cout<<"\n c="<<c;
    }
};
int main(){
    C aa(10,20,30);
    
    aa.display();
    aa.print();
    aa.putdata();
    return 0;
    
}