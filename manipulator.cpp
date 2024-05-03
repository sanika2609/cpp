#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout<<setw(10)<<"Hello sanika"<<endl;
    cout<<setw(10)<<setprecision(2)<<2.5555;
    cout<<setiosflags(ios::hex);
    cout<<endl<<"hexadeccimal of 84 is:"<<84;
    return 0;
}
