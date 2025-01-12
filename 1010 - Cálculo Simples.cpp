#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int C1,N1,C2,N2;
    float V1,V2,PAGAR;
    cin>>C1>>N1>>V1>>C2>>N2>>V2;
    PAGAR=V1*N1+V2*N2;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<PAGAR<<"\n";
    
 
    return 0;
}
