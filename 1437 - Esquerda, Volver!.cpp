#include <iostream>

using namespace std;

int main() {

	int N,E,D;
	char G;
	cin>>N;
	while(N!=0)
	{
		E=0;
		D=0;
		for(int i=0;i<N;i++)
		{
			cin>>G;
			if(G=='D')
			{
				D++;
			}
			else
			{
				if(G=='E')
				{
					E--;
				}
			}
		}
		if(D>4)
		{
			D=D%4;
		}
		if(E<-4)
		{
			E=E%4;
		}
		G=D+E;
		if(G==1||G==-3)
		{
			cout<<"L\n";
		}
		else
		{
			if(G==2||G==-2)
			{
				cout<<"S\n";
			}
			else
			{
				if(G==3||G==-1)
				{
					cout<<"O\n";
				}
				else
				{
					if(G==4||G==-4||G==0)
					{
						cout<<"N\n";
					}
				}
			}
		}
		cin>>N;
	}


    return 0;
}
