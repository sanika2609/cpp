#include <iostream>
using namespace std;
class demo{
    int a;
    public:
    demo ()
    {
        a=10;
    }
    demo(demo &z)
    {
        a=z.a;
    }
    void putdata()
    {
        cout<<"\n a="<<a;
    }
};
int main()
{
    demo aa;
    demo bb=aa;
    aa.putdata();
    bb.putdata();
    return 0;
}