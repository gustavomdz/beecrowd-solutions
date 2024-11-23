#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    int X;
    cin>>X;
    for(int j=1;j<=X/2;j++)
    {
    	if(X%j==0)
    	{
    		cout<<j<<endl;
		}
	}
	cout<<X<<endl;
 
    return 0;
}
