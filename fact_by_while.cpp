#include <iostream>
using namespace std;
int main() {
    int num,i=1,fact=i;
  cout<<"Enter number"<<endl;
  cin>>num;
  while(i<=num){
      
      fact=fact*i;
      i++;
  }
  cout<<"Factorial of the given number is:"<<fact;
    return 0;
}
