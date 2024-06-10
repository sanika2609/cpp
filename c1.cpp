#include<iostream>
using namespace std;
class Box{
    int height;
    float width;
    int length;
    public:
    Box(){
        height=5;
        width=4;
        length=6;
    }
    Box(int a,int b,int c)
    {
        height=a;
        width=b;
        length=c;
    }
    ~Box()
    {
        cout<<"Memory is deallocated"<<endl;
    }
    public:
    void displayInfo()
    {
        cout<<height<<endl;
        cout<<width<<endl;
        cout<<length<<endl;
    }
    
};
int main()
{
    Box b1;
    b1.displayInfo();
    Box b2(6,7,8);
    b2.displayInfo();
    return 0;
}
