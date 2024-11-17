#include <iostream>

using namespace std;

int main()
{

    int M[101][101],N,i,j,k,n;
    while(cin>>N)
    {
        k=1;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                M[i][j]=0;
            }
        }
        for(i=0;i<N;i++)
        {
            M[i][i]=2;
        }
        for(i=0,j=N-1;i<N&&j>=0;i++,j--)
        {
            M[i][j]=3;
        }
        j=N/3;
        i=N/3;
        n=1;
        while(k!=N/2)
        {
            for(;j<N-N/3;j++)
            {
                M[i][j]=1;
            }
            j-=n;
            i++;
            for(;i<N-N/3;i++)
            {
                M[i][j]=1;
            }
            i-=n;
            j--;
            for(;j>=N/3;j--)
            {
                M[i][j]=1;
            }
            i--;
            j+=n;
            for(;i>=N/3+1;i--)
            {
                M[i][j]=1;
            }
            i+=n;
            j++;
            k++;
            n++;
        }
        M[N/2][N/2]=4;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                cout<<M[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
