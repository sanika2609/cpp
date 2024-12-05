#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter value of n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
        
    }
    cout<<"sum of n natural numbers is:"<<sum;
    
    return 0;
}
