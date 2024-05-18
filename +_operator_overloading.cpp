#include <iostream>
using namespace std;
class Complex{
    int r,i;
    public:
    void getdata()
    {
        cout<<"Enter real and imaginary";
        cin>>r>>i;
        
    }
    void putdata(){
        cout<<"real"<<r<<"imaginary "<<i;
    }
    Complex operator+(Complex bb)
    {
        Complex cc;
        cc.r=r+bb.r;
        cc.i=i+bb.i;
        return cc;
    }
};
int main()
{
    Complex aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}
