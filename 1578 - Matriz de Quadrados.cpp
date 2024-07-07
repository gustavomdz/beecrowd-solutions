#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N,M,q=4,cont=0;
    cin>>N;
    while(cont<N)
    {
        cin>>M;
        unsigned long long int X[M][M],maior[M],t[M];
        for(int i=0;i<M;i++)
        {
            maior[i]=0;
            t[i]=0;
        }
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<M;j++)
            {
                cin>>X[i][j];
                X[i][j]=X[i][j]*X[i][j];
                if(maior[j]<X[i][j])
                {
                    maior[j]=X[i][j];
                }
            }
        }
        for(int i=0;i<M;i++)
        {
            while(maior[i]!=0)
            {
                maior[i]=maior[i]/10;
                t[i]++;
            }
        }
        cout<<"Quadrado da matriz #"<<q<<":\n";
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(j==0)
                {
                    cout<<setw(t[j])<<X[i][j];
                }
                else
                {
                    cout<<setw(t[j]+1)<<X[i][j];
                }
            }
            cout<<endl;
        }
        q++;
        cont++;
        if(cont<N)
        {
            cout<<endl;
        }
    }

    return 0;
}
