#include <iostream>

using namespace std;

int main()
{
	char A[20];
	char B[20];
	char C[20];
	cin>>A>>B>>C;
	if(A[0]=='v')
	{
		if(B[0]=='a')
		{
			if(C[0]=='c')
			{
				cout<<"aguia\n";
			}
			else
			{
				cout<<"pomba\n";
			}
		}
		else
		{
			if(C[0]=='o')
			{
				cout<<"homem\n";
			}
			else
			{
				cout<<"vaca\n";
			}
		}
	}
	else
	{
		if(B[0]=='i')
		{
			if(C[2]=='m')
			{
				cout<<"pulga\n";
			}
			else
			{
				cout<<"lagarta\n";
			}
		}
		else
		{
			if(C[0]=='h')
			{
				cout<<"sanguessuga\n";
			}
			else
			{
				cout<<"minhoca\n";
			}
		}
	}
	
	return 0;
}
