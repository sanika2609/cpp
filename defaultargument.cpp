#include <iostream>
using namespace std;
void add(int a=5,int b=10);
int main() {
   add();
   add(10);
   add(10,20);
    return 0;
}
void add(int a,int b)
{
    
    cout<<"\n Addition of a and b ="<<a+b;
}