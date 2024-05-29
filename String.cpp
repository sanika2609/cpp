#include<iostream>
using namespace std;
class Cls{
int age;
string name;
public:
void set(int a,string n)
{
age = a;
name = n;
}
string get_name()
{
return name;
}
