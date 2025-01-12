#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float X,Y;
    cin>>X>>Y;
    X=X/Y;
    cout<<fixed<<setprecision(3)<<X<<" km/l\n";
 
    return 0;
}
