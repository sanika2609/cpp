#include<iostream>
using namespace std;
class posneg{
    int a;
    
    public:
    void getdata();
    void putdata();
};
void posneg::getdata()
{
    cout<<"Enter a number";
    cin>>a;
}
void posneg::putdata()
{
    if(a>0)
    cout<<"Positive";
    else if(a<0)
    cout<<"Negative";
    else
    cout<<"Zero";
}
int main()
{
    posneg aa;
    aa.getdata();
    aa.putdata();
}