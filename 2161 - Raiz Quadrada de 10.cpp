#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	
	int N;
	double X=6;
    cin>>N;
    for(int i=0;i<N;i++)
    {
    	X=6+1/X;
	}
	cout<<fixed<<setprecision(10)<<X-3<<endl;
 
    return 0;
}
