#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,Q;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
    	if(i%2==0)
    	{
    		Q=i*i;
    		cout<<i<<"^2 = "<<Q<<"\n";
		}
	}
 
    return 0;
}
