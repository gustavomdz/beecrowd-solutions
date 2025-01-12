#include <iostream>

using namespace std;

int main()
{
    int A,N,S=0;
    cin>>A;
    while(N<=0)
    {
        cin>>N;
        for(int i=0;i<=N-1;i++)
        {
            S=A+i+S;
        }
        if(S!=0)
        {
            cout<<S<<endl;
        }
    }

    return 0;
}

