#include<iostream>
using namespace std;
class Number{
	private:
		int x,y;
		public:

			friend istream& operator >>(istream& in , Number& other){
				cout<<"Enter value for x: ";
				in>>other.x;
				cout<<"Enter value for y: ";
				in>>other.y;
				return in;
			}
			friend ostream& operator << (ostream& out,const Number& other){
				out<<"("<<other.x<<","<<other.y<<")";
				return out;
			}
};
int main(){
	Number n1;
	Number n2;
	cout<<"Enter details of n1: ";
	cin>>n1;
	cout<<"Enter details for n2: ";
	cin>>n2;
	cout<<n1<<endl<<n2<<endl;
	
}
