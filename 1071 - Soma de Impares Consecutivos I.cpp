#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,Y,S=0;
    cin>>X>>Y;
    for(int i=Y+1;i<X;i++)
    {
    	if(i%2!=0)
    	{
    		S=S+i;
		}
	}
	cout<<S<<"\n";
 
    return 0;
}
