#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter number";
    cin>>n;
    while(n>1)
    {
        fact=fact*n;
        n=n-1;
    }
    cout<<"Factorial of number is="<<fact;
}