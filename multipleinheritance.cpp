#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    
    public:
    void input()
    {
        cout<<"Enter the value of a";
        cin>>a;
    }
};
class B{
    protected:
    int b;
    
    public:
    void getdata()
    {
        cout<<"Enter the value of b";
        cin>>b;
    }
};
class C:public A,public B
{
    public:
    void Addition(){
        cout<<"Addition of two numbers is="<<a+b;
    }
};
int main()
{
    C aa;
    aa.input();
    aa.getdata();
    aa.Addition();
    return 0;
}