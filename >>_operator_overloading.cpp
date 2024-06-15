#include<iostream>
using namespace std;
class Number{
	private:
		int x,y;
		public:
			Number(int xval,int yval){
				x=xval;
				y=yval;
			}
			friend ostream& operator <<(ostream& out, const Number& other){
				out<<"("<<other.x<<","<<other.y<<")";
				return out;
			}
			
};
int main(){
	Number n1(1,2);
	Number n2(3,4);
	cout<<"n1: "<<n1<<endl;
	cout<<"n2: "<<n2<<endl;
}
