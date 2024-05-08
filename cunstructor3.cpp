#include <iostream>
using namespace std;
class ATS {
    int a,b,c;
    public:
    ATS(){
        a=6,b=6,c=6;
    }
    ATS(int x,int y,int z){
        a=x,b=y,c=z;
    }
    void output(){
        cout<<a<<b<<c;}
    };
    int main(){
        ATS p;
        p.output();
        ATS d(2,3,4);
        d.output();
        return 0;
    }
    
  
