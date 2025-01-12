#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double N;
	cin>>N;
	if(N>=0&&N<=2000.00)
	{
		cout<<"Isento\n";
	}
	else
	{
		if(N>=2000.01&&N<=3000)
		{
			N=(N-2000)*0.08;
		}
		else
		{
			if(N>=3000.01&&N<=4500)
			{
				N=1000*0.08+(N-3000)*0.18;
			}
			else
			{
				if(N>4500)
				{
					N=1000*0.08+1500*0.18+(N-4500)*0.28;
				}
			}
		}
		cout<<fixed<<setprecision(2)<<"R$ "<<N<<"\n";
	}
	
	
	return 0;
}
