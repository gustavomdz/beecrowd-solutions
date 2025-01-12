#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    float X1,X2,Y1,Y2,D;
    cin>>X1>>Y1>>X2>>Y2;
    D=(X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1);
    D=sqrt(D);
    cout<<fixed<<setprecision(4)<<D<<"\n";
    
 
    return 0;
}
