#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string movie_name;
    double adult_ticket_price,child_ticket_price;
    int num_of_adult_ticket_sold,num_child_ticket_sold;
    double charity_percentage;
    
    cout<<"Enter movie name"<<endl;
    cin>>movie_name;
    cout<<"Enter adult ticket price:"<<endl;
    cin>>adult_ticket_price;
    cout<<"Enter child ticket price"<<endl;
    cin>>child_ticket_price;
    cout<<"Enter number of adult ticket sold"<<endl;
    cin>>num_of_adult_ticket_sold;
    cout<<"Number of child ticket sold"<<endl;
    cin>>num_child_ticket_sold;
    cout<<"enter percentage of gross amount to be donated to charity"<<endl;
    cin>>charity_percentage;
    
    double gross_amount=(adult_ticket_price * num_of_adult_ticket_sold) + (child_ticket_price * num_child_ticket_sold);
    
    double donated_amount=(gross_amount * charity_percentage)/100;
    
    cout<<fixed<<setprecision(2);
    cout<<movie_name<<endl;
    cout<<gross_amount<<endl;
    cout<<charity_percentage<<donated_amount<<endl;
    
}
