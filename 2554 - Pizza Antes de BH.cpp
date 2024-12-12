#include <iostream>

using namespace std;

int main() {

	int N,D,DIA,MES,ANO,P,k,DIA2,MES2,ANO2,l;
	char B;
	while(cin>>N)
	{
    cin>>D;
    l=0;
    for(int i=0;i<D;i++)
    {
    	k=0;
    	cin>>DIA>>B>>MES>>B>>ANO;
    	for(int j=0;j<N;j++)
    	{
    		cin>>P;
    		if(P==1)
    		{
    			k++;
			}
		}
		if(k==N&&l==0)
		{
			DIA2=DIA;
			MES2=MES;
			ANO2=ANO;
			l++;
		}
	}
	if(l!=0)
	{
		cout<<DIA2<<"/"<<MES2<<"/"<<ANO2<<endl;
	}
	else
	{
		cout<<"Pizza antes de FdI\n";
	}
}

    return 0;
}
