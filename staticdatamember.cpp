#include<iostream>
using namespace std;
class demo{
   int x,y;
   static int z;
   public:
   void getdata(int a,int b)
   {
       x=a;
       y=b;
       z=z+1;
   }
   void putdata()
   {
       cout<<"\n x"<<x<<"\n y="<<y<<"\n z="<<z;
   }
};
int demo::z;
int main()
{
    demo aa,bb;
    aa.getdata(5,10);
    bb.getdata(10,20);
    aa.putdata();
    bb.putdata();
    return 0;
    
}