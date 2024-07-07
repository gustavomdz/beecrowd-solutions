#include <iostream>

using namespace std;

void varredura(int N,int M)
{
    int Mat[N][M],X=0,Y=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>Mat[i][j];
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(Mat[i][j]==42)
            {
                if(Mat[i-1][j-1]==7&&Mat[i-1][j]==7&&Mat[i-1][j+1]==7&&Mat[i][j-1]==7&&Mat[i][j+1]==7&&Mat[i+1][j-1]==7&&Mat[i+1][j]==7&&Mat[i+1][j+1]==7)
                {
                    X=i+1;
                    Y=j+1;
                }
            }
        }
    }
    cout<<X<<" "<<Y<<endl;
}

int main()
{
    int N,M;
    cin>>N>>M;
    varredura(N,M);


    return 0;
}
