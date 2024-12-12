#include <iostream>
#include <cmath>

using namespace std;

int main()
{//exemplo 1: se 80m=100% entao quantos m são de 100%?
    int A,B,C,L;
    cin>>A;
    if(A!=0)
    {
	    cin>>B>>C;
	}
    while(A!=0)
    {
        L=sqrt((A*B*100)/C);//raiz pq é metros quadrados
        cout<<L<<endl;
        cin>>A;
        if(A!=0)
        {
    	    cin>>B>>C;
    	}
    }


    return 0;
}
