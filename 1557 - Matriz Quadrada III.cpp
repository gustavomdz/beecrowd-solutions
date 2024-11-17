#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N,i,j,M[100][100],C,k,MAIOR,T;
    cin>>N;
    while(N!=0)
    {
        T=0;
        C=1;
        k=2;
        i=0;
        j=0;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                M[i][j]=C;
                C*=2;
            }
            C=k;
            k*=2;
        }
        MAIOR=M[N-1][N-1];
        while(MAIOR!=0)
        {
            MAIOR=MAIOR/10;
            T++;
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(j==0)
                {
                    cout<<setw(T)<<M[i][j];
                }
                else
                {
                    cout<<setw(T+1)<<M[i][j];
                }
            }
            cout<<endl;
        }
        cout<<endl;
        cin>>N;
    }

    return 0;
}
