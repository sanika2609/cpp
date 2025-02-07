#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout<<"Enter value of a";
        cin>>a;
    }
    void putdata(){
        cout<<a;
    }
void operator --(){
    a=a-1;
}
};
int main(){
    demo aa;
    aa.getdata();
    cout<<"\n original value=";
    aa.putdata();
    --aa;
    cout<<"\n value after decrement=";
    aa.putdata();
    return 0;
}