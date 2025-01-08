#include <iostream>
using namespace std;
class A{
    protected:
    int a;
    
    public:
    void input()
    {
        cout<<"Enter value of a";
        cin>>a;
        
    }
};
class B:public A
{
    protected:
    int b;
    public:
    void getdata()
    {
        cout<<"Enter value of b";
        cin>>b;
    }
    void putdata()
    {
        cout<<"Addition of a and b is="<<a+b;
    }
};
int main()
{
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}
