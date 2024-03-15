#include<iostream>
using namespace std;
class Date{
      int day;
      string month;
      int year;

    public: Date(){
    day=1;
    month="Jan";
    year=2020;
   }
    Date(int d,string m,int y){
      day=d;
      month=m;
      year=y;
    }
  public: void displayInfo(){
  cout<<day<<"/"<<month<<"/"<<year<<endl;

    }
};
int main(){
Date d(7,"March",2024);
d.displayInfo();

return 0;
}

