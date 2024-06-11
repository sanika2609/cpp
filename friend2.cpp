#include<iostream>
using namespace std;
class Circle{
	private:
		int radius;
		public:
			Circle(){
				radius=10;
			}
			friend void circumference(Circle c);
};
void circumference(Circle c){
	cout<<"Circumference: "<<2*3.14*c.radius;
}
int main(){
	Circle c;
	circumference(c);
}
