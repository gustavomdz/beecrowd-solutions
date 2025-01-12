#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int N;
    double N1,N2,N3,M;
    cin>>N;
    for(int i=0;i<N;i++)
    {
    	cin>>N1>>N2>>N3;
    	M=(2*N1+3*N2+5*N3)/10;
    	cout<<fixed<<setprecision(1)<<M<<endl;
	}
 
    return 0;
}
