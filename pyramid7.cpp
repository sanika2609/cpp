#include <iostream>
using namespace std;
int main() {
    int i,j,n,b;
    cout<<"Enter number of rows";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(b=1;b<=n-i;b++)
        cout<<"-";
        
        for(j=0;j<=i;j++)
        cout<<i+j;
        cout<<"\n";
    }
    return 0;
}