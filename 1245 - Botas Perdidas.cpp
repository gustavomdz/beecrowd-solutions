#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,M,par,n,o,i;
    char L;
    while(cin>>N)
    {
    	par=0;
	    int LD[N],LE[N];
	    for(n=0,o=0,i=0;i<N;i++)
	    {
	    	cin>>M>>L;
	    	if(L=='D')
	    	{
	    		LD[n]=M;
	    		n++;
			}
			else
			{
				if(L=='E')
				{
					LE[o]=M;
					o++;
				}
			}
		}
		LD[n]=-1;
		LE[o]=-1;
		for(int j=0,k=0;LD[j]!=-1;)
		{
			if(LD[j]==LE[k])
			{
				par++;
				LE[k]=0;
				LD[j]=0;
				j++;
				k=0;
			}
			else
			{
				if(LE[k]==-1)
		    	{
		    		LD[j]=0;
		    		j++;
		    		k=0;
		    	}
				else
				{
					k++;
				}
		    }
		}
		cout<<par<<endl;
    }
 
    return 0;
}
