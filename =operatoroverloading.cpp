#include <iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout<<"Enter value of a";
        cin>>a;
    }
    void putdata(){
        cout<<"\n a="<<a;
    }

void operator  =(demo bb)
{
    a=bb.a;

}
};
int main(){
    demo aa,bb;
    bb.getdata();
    aa=bb;
    bb.putdata();
    aa.putdata();
    return 0;
}
