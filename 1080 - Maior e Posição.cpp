#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,M=-1,pos;
    for(int i=0;i<100;i++)
    {
    	cin>>N;
    	if(N>M)
    	{
    		M=N;
    		pos=i+1;
		}
	}
	cout<<M<<"\n"<<pos<<"\n";
 
    return 0;
}
