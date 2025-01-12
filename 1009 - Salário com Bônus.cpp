#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    string N;
    double S,V,TOTAL;
    cin>>N>>S>>V;
    TOTAL=V*0.15+S;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<TOTAL<<"\n";
 
    return 0;
}
