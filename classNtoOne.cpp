#include<iostream>
using namespace std;
class oneton
{
   int n;
   
   public:
   void getdata()
   {
       cout<<"Enter number";
       cin>>n;
   }
   void putdata()
   {
       int i;
      for(i=n;i>=1;i--)
       cout<<"\n"<<i;
   }
};
   int main()
   {
       oneton aa;
       aa.getdata();
       aa.putdata();
       return 0;
   }