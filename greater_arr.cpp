#include <iostream>
using namespace std;
int main() {
    int i,a[]={10,50,30};
    
    {
        if(a[0]>a[1] && a[0]>a[2])
        {
          cout<<a[0];
        }
       else if(a[1]>a[0] && a[1]>a[2])
        {
           cout<<a[1];
        }
       else if(a[2]>a[0] && a[2]>a[1])
        {
            cout<<a[2];
        }
        else
        {
            cout<<".......";
        }
    }
    

    return 0;
}
