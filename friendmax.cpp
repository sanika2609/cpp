#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    void getdata();
    friend int max(demo);
};
void demo::getdata()
{
    cout<<"Enter two numbers";
    cin>>a>>b;
}
 int max(demo aa)
 {
     return (aa.a > aa.b) ? aa.a : aa.b;
 }
 int main()
 {
     demo aa;
     aa.getdata();
     cout<<"max number is:"<<max(aa);
     return 0;
 }