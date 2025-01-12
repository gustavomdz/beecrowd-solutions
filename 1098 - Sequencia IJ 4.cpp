#include <iostream>
 
using namespace std;
 
int main() {
 
    for(float i=0,j=1;i<=2.2;i=i+0.2,j=j+0.2)
    {
    	cout<<"I="<<i<<" "<<"J="<<j<<endl;
    	cout<<"I="<<i<<" "<<"J="<<j+1<<endl;
    	cout<<"I="<<i<<" "<<"J="<<j+2<<endl;
	}
 
    return 0;
}
