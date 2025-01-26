#include<iostream>
using namespace std;
class A{
    protected:
    int roll;
    
    public:
    void getroll()
    {
        cout<<"Enter roll no";
        cin>>roll;
    }
    void putroll(){
        cout<<"roll="<<roll;
    }
};
class B:public A
{
    protected:
    int sub1,sub2;
    
    public:
    void getsub(){
        cout<<"Enter marks of two subjects";
        cin>>sub1>>sub2;
    }
    void putmarks(){
        cout<<"sub1="<<sub1<<endl<<"sub2="<<sub2;
    }
};
class C:public B{
    protected:
    int sprtmarks;
    
    public:
    void getsprtmarks(){
        cout<<"Enter sprt marks";
        cin>>sprtmarks;
    }
    void putsprtmarks(){
        cout<<"sprt marks="<<sprtmarks;
    }
    void total(){
        cout<<"total ="<<sub1+sub2+sprtmarks;
    }
};
int main()
{
    C aa;
    aa.getroll();
    aa.putroll();
    aa.getsub();
    aa.putmarks();
    aa.getsprtmarks();
    aa.putsprtmarks();
    aa.total();
    return 0;
    
}