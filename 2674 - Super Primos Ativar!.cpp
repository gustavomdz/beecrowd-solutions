#include <iostream>
#include <cmath>

using namespace std; 

int main() { 

    int N,D,QD,QD1,QD3,R,k;  
    while(cin>>N) 
    {
        D=N;
        QD=0;
        QD1=0;
        if(N!=1&&N!=0)
        {
			R=sqrt(N);
			for(k=2;N%k!=0&&k<=R;k++)
			{}
			if(k>R)
			{
			    while(D!=0)
	            {
	                QD++;
	                D=D/10;     
	            }
		        QD3=QD;
		        while(QD1!=1)
		        {
		            QD1=pow(10,QD3);
		            D=N/QD1;
		            N=N%QD1;
		            QD3--;
		            if(D==2||D==3||D==5||D==7)
		            {
		            	QD--;
					}
		        }
		        if(QD==0)
		        {
		        	cout<<"Super\n";
				}
				else
				{
				    cout<<"Primo\n";
				}
			}
			else
			{
				cout<<"Nada\n";
			}
		}
		else
		{
			cout<<"Nada\n";
		}
	}

    return 0; 
}
