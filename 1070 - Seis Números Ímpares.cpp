#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,j=6;
    cin>>X;
    for(int i=0;i<=j;i++)
    {
    	if(X%2!=0)
    	{
    		cout<<X<<"\n";
    		j++;
		}
		X++;
	}
 
    return 0;
}
