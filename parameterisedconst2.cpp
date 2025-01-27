#include <iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void putdata()
    {
        cout<<"\n a="<<a<<"\n b="<<b;
    }
};
int main() {
    int m,n;
    cout<<"Enter two numbers:";
    cin>>m>>n;
    demo aa(m,n);
    aa.putdata();
    return 0;
}