#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    void getdata(){
        cout<<"Enter x";
        cin>>x;
    }
    void putdata(){
        cout<<"x="<<x;
    }
    bool operator ==(demo bb){
        if(x==bb.x)
        return true;
        else
        return false;
    }
};
int main(){
    demo aa,bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
    if(aa==bb)
    cout<<"Values are equal";
    else
    cout<<"values are not equal";
    return 0;
}