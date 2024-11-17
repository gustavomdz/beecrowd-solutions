#include <iostream>

using namespace std;

int main()
{
    int N,i,j,M[70][70];
    while(cin>>N)
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                M[i][j]=3;
            }
        }
        for(i=0;i<N;i++)
        {
            M[i][i]=1;
        }
        for(i=0,j=N-1;i<N&&j>=0;i++,j--)
        {
            M[i][j]=2;
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                cout<<M[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
