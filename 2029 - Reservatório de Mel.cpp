#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
	
	double V,D,AB,raio,H,AL,AT;
	while(cin>>V>>D)
	{
		raio=D/2;
		AB=3.14*pow(raio,2);
		H=V/AB;
		cout<<fixed<<setprecision(2)<<"ALTURA = "<<H<<endl<<"AREA = "<<AB<<endl;
	}
 
    return 0;
}
