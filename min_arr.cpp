#include <iostream>
using namespace std;
int main() {
    int a[]={5,10,15};
    if(a[0]<a[1] && a[0]<a[2])
    {
        cout<<"The minimum number is:"<<a[0];
    }
   else if(a[1]<a[0] && a[1]<a[2])
   {
       cout<<"The minimum number is:"<<a[1];
   }
   else if(a[2]<a[0] && a[2]<a[1])
   {
      cout<<"The minimum number is:"<<a[2];
   }
   else
   {
       cout<<".......";
       
   }
   return 0;
}
