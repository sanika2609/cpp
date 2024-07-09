#include <iostream>
using namespace std;
void sub(int a,int b)
{
    cout<<"sub is:"<<a-b;
}
void sub(int a,int b,int c)
{
    cout<<"sub is:"<<a-b-c;
}
int main() {
    sub(5,3);
    sub(6,2,1);

    return 0;
}
