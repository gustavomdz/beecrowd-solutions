#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float A,B,C,P,AREA;
    cin>>A>>B>>C;
    if(A+C>B&&A+B>C&&B+C>A)
    {
        P=A+B+C;
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<P<<"\n";
    }
    else
    {
        AREA=(A+B)*C/2;
        cout<<fixed<<setprecision(1)<<"Area = "<<AREA<<"\n";
    }
 
    return 0;
}
