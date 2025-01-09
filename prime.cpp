#include<iostream>
using namespace std;
int main()
{
    int i,count=0,j;
    cout<<"Enter number";
    cin>>i;
   j=1;
   while(j<=i)
   {
       if(i%j==0)
       count++;
       j++;
   }
   if(count==2)
   cout<<"prime number";
   else
   cout<<"Composite number";
   return 0;
}