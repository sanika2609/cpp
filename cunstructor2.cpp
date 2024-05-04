#include <iostream>
using namespace std;
class ATS {
    int a,b,c;
    public:ATS(){
        a=5;
        b=5;
        c=5;
    }

void input(){
    cout<<"Enter the three numbers";
    cin>>a>>b>>c;
}
void output(){
    cout<<"A"<<"="<<a<<endl;
    cout<<"B"<<"="<<b<<endl;
    cout<<"C"<<"="<<c<<endl;
}
};
int  main(){
  ATS a;
  a.input();
  a.output();
    return 0;
}
