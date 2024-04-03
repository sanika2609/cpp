#include <iostream>
using namespace std;
void increasing(int x,int n){
    if(x>n)  return;
    cout<<x;
    increasing(x+1,n);
    return;
    
}

int main() {
   int n;
   cout<<"Enter the value of n"<<endl;
   cin>>n;
   increasing(1,n);
   
    return 0;
}
