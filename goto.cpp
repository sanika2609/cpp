#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter number";
    cin>>a;
    
    if(a==0)
    goto composite;
    
    if(a%2==0)
    goto even;
    
    else 
    goto odd;
    
    composite:
    cout<<"cannot be categorised";
    return 0;
    
    even:
    cout<<"The number is even";
    return 0;
    
    odd:
    cout<<"The number is odd";
    return 0;
}