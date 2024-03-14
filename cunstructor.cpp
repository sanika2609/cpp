#include<iostream>
using namespace std;
class Box{
int height;
float width;
int length;
 public:Box(){
height=5;
width=5;
length=5;
}
Box(int a){
height=width=length=a;
}
~Box(){
cout<<"Memory is deallocated";
}
public:void displayInfo(){
cout<<height<<endl;
cout<<width<<endl;
cout<<length<<endl;
}

};
int main(){
Box b1;
b1.displayInfo();
Box b2(4);
b2.displayInfo();
return 0;
}


