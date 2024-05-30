#include<iostream>
using namespace std;
class A{
public:{
cout<<"constructor of A"<<endl;
}
class B: public A{
public
{
cout<<"constructor of B"<<endl;
}
class C: public A{
public
{
cout<<"constructor of C"<<endl;
}
int main()
{
C.obj;
return 0;
}
