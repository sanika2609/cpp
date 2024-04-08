#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout<<"Enter value of n";
    cin>>n;

    cout<<"reverse order ",n;

    for(i=n; i>=1; i--)
    {
        cout<< i;
    }

    return 0;
}
