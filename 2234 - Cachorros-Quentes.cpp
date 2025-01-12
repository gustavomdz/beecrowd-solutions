#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double H,P,M;
    cin>>H>>P;
    M=H/P;
    cout<<fixed<<setprecision(2)<<M<<"\n";
 
    return 0;
}
