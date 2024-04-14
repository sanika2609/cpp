#include <iostream>
using namespace std;
int main() {
   int i,a[]={10,15,20};
   int b[]={};
   for(i=0;i<=2;i++)
   {
   a[i]=b[i];
   }
       cout<<"The first array is:";
       {
           for(i=0;i<=2;i++)
           cout<<a[i];
       }
       cout<<"The copied array is:";
       {
           for(i=0;i<=2;i++)
           
               cout<<b[i];
           
       }
   
    return 0;
}
