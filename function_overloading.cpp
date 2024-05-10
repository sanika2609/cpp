#include <iostream>
//#include<conio>
using namespace std;
void add(int a,int b)
{
    cout<<"Addition is:"<<a+b<<endl;
}
void add(int a,double b)
{
    cout<<"Addition is:"<<a+b<<endl;
}
void add(int a,int b,int c)
{
    cout<<"Addition is:"<<a+b+c<<endl;
}
int main() {
    add(2,3);
    add(4,4.5);
    add(10,20,30);
    //getch();
    return 0;
}
