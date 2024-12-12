#include <iostream>

using namespace std;

int main() {

	int N,j1,j2,A,B;
	cin>>N;
    while(N!=0)
    {
    	j1=0;
    	j2=0;
    	for(int i=0;i<N;i++)
    	{
    		cin>>A>>B;
    		if(A>B)
    		{
    			j1++;
			}
			else
			{
				if(A<B)
				{
					j2++;
				}
			}
		}
		cout<<j1<<" "<<j2<<endl;
		cin>>N;
	}


    return 0;
}
