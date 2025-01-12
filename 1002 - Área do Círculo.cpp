#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    double r,a;
    cin>>r;
    a=3.14159*(r*r);
    cout<<fixed<<setprecision(4)<<"A="<<a<<"\n";
 
    return 0;
}
