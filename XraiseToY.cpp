#include<iostream>
using namespace std;
int main()
{
    int x,y,i,pro=1;
    cout<<"Enter value of x and y";
    cin>>x>>y;
    i=1;
    while(i<=y)
    {
        pro=pro*x;
        i=i+1;
    }
    cout<<pro;
    return 0;
}
   