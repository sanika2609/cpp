#include <iostream>
using namespace std;
class ATS {
   int a,b,c;
   public:
   ATS(){
       a=5,b=5,c=5;
   }
   ATS(int x,int y,int z){
       a=x,b=y,c=z;
   }
   void output(){
       cout<<a<<b<<c;
   }
  ATS(ATS &T)
  {
      
      a=T.a;
      b=T.b;
      c=T.c;
  }
 
};
int main(){
    ATS p;
    p.output();
    ATS d(10,20,30);
    ATS T(d);
    T.output();
    return 0;
}
