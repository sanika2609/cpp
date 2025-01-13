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
    demo aa(5,10);
    aa.putdata();
    return 0;
}