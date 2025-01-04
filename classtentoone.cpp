#include<iostream>
using namespace std;
class tentoone
{
   public:
   void putdata()
    {
        int i=10;
        for( ;i>=1;i--)
        cout<<"\n"<<i;
    }
};
int main()
{
    tentoone aa;
    aa.putdata();
    return 0;
}