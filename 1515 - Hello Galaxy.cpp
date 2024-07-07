#include <iostream>

using namespace std;

int main()
{
    int N,A,T,C;
    string P,PM;
    cin>>N;
    while(N!=0)
    {
        C=999999;
        for(int i=0;i<N;i++)
        {
            cin>>P>>A>>T;
            if(A-T<C)
            {
                C=A-T;
                PM=P;
            }
        }
        cout<<PM<<endl;
        cin>>N;
    }

    return 0;
}
