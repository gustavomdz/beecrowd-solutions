#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double N,C,T=0,TS=0,TR=0,TC=0,PS,PR,PC;
	char A[2];
    cin>>N;
    for(int i=0;i<N;i++)
    {
    	cin>>C>>A;
    	T=T+C;
    	if(A[0]=='S')
    	{
    		TS=TS+C;
		}
		else
		{
    	    if(A[0]=='R')
    	    {
    		    TR=TR+C;
		    }
		    else
		    {	
    	        if(A[0]=='C')
    	        {
    		        TC=TC+C;
		        }
			}
		}
	}
	PS=TS*100/T;
	PR=TR*100/T;
	PC=TC*100/T;	
	cout<<"Total: "<<T<<" cobaias\n";
	cout<<"Total de coelhos: "<<TC<<endl;
	cout<<"Total de ratos: "<<TR<<endl;
	cout<<"Total de sapos: "<<TS<<endl;
	cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<PC<<" %\n";
	cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<PR<<" %\n";
	cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<PS<<" %\n";
 
    return 0;
}
