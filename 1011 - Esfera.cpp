#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double R,V;
    cin>>R;
    V=(4/3.0)*3.14159*(R*R*R);
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<V<<"\n";
 
    return 0;
}
