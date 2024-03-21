#include<iostream>
#include<list>
using namespace std;
class Youtubechanel{
  string name;
  int subscribers;
  
  public: Youtubechanel(string nm,int sub){
	name=nm;
	subscribers=sub;
   
        }
public: void displayInfo(){
     cout<<name<<endl;
     cout<<subscribers<<endl;
}
};
class MyCollection{
  list<Youtubechanel>mylist;
  public :void operator+=(Youtubechanel& chanel){
  mylist.push_back(chanel);
}
};
int main()
{
  Youtubechanel Yt1("DKTE",5);
  Youtubechanel Yt2("SANIKA",1000);
  Yt1.displayInfo();
  Yt2.displayInfo();
 
 
 
  return 0;
}
