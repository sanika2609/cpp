#include<iostream>
using namespace std;
class maxmin
{
    int a,b;
    
    public:
    void getdata();
    void putdata();
};
void maxmin::getdata()
{
    cout<<"Enter two numbers";
    cin>>a>>b;
}
void maxmin::putdata()
{
    if(a>b)
    cout<<"a is max number";
    else
    cout<<"b is max";
    
}
int main()
{
    maxmin aa;
    aa.getdata();
    aa.putdata();
    return 0;
}