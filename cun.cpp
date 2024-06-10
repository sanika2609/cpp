#include<iostream>
using namespace std;
class Box{
    int length;
    int breadth;
    public:
    Box(){
        length=9;
        breadth=7;
    }
    Box(int a,int b)
    {
        length=4;
        breadth=6;
    }
    ~Box()
    {
        cout<<"Memory is deallocated"<<endl;
    }
    public:void displayInfo()
    {
        cout<<length<<endl;
        cout<<breadth<<endl;
    }
};
int main()
{
    Box b1;
    b1.displayInfo();
    Box b2(2,3);
    b2.displayInfo();
    return 0;

}
