#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,X,IN=0,O=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
    	cin>>X;
    	if(X>=10&&X<=20)
    	{
    		IN++;
		}
		else
		{
			O++;
		}
	}
	cout<<IN<<" in\n"<<O<<" out\n";
 
    return 0;
}
