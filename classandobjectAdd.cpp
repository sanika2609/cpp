#include <iostream>
using namespace std;
class Addition
{
    private:
    int a, b;
    
    public:
    void getdata()
    {
        cout<<"Enter two numbers";
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<"Addition ="<<a+b;
    }
};
int main()
{
    Addition aa;
    aa.getdata();
    aa.putdata();
    return 0;
}
