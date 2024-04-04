#include<iostream>
using namespace std;
class Node{
	 public: int data;
	Node*next;
};
class List{
	private: Node*head;
	public:List(){
		head=NULL;
	}
	void insert(int d)
	{
		Node*nn=new Node;
		nn->data=d;
		nn->next=NULL;
		head=nn;
}
	};
	int main()
	{
		List l1;
		l1.insert(3);
		
	return 0;
}
