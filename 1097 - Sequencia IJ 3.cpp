#include <iostream>
 
using namespace std;
 
int main() {
 
    for(int i=1,j=7;j!=17,i!=11;i=i+2,j=j+2)
    {
    	cout<<"I="<<i<<" "<<"J="<<j<<endl;
    	cout<<"I="<<i<<" "<<"J="<<j-1<<endl;
    	cout<<"I="<<i<<" "<<"J="<<j-2<<endl;
	}
 
    return 0;
}
