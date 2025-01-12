#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float T,V,QL;
    cin>>T>>V;
    QL=T*V/12;
    cout<<fixed<<setprecision(3)<<QL<<"\n";
 
    return 0;
}
