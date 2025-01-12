#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    float A,B,C,DELTA,R1,R2;
    cin>>A>>B>>C;
    DELTA=B*B-4*A*C;
    if(DELTA>=0&&A!=0)
    {
    	R1=(-B+(sqrt(DELTA)))/(2*A);
    	R2=(-B-(sqrt(DELTA)))/(2*A);
    	cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<"\n";
    	cout<<fixed<<setprecision(5)<<"R2 = "<<R2<<"\n";
	}
	else
	{
		cout<<"Impossivel calcular\n";
	}
 
    return 0;
}
