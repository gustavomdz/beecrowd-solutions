#include <iostream>

using namespace std;

int main()
{
    long long int M,N,MU,MU1,S;
    while(cin>>M>>N)
    {
        MU=1;
        MU1=1;
        if(M==0)
        {
            MU=1;
        }
        if(N==0)
        {
            MU1=1;
        }
        if(M!=0)
        {
            while(M>=1)
            {
                MU=MU*M;
                M--;
            }
        }
        if(N!=0)
        {
            while(N>=1)
            {
                MU1=MU1*N;
                N--;
            }
        }
        S=MU+MU1;
        cout<<S<<endl;
    }

    return 0;
}

