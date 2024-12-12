#include <iostream>

using namespace std;

int main()
{
    int K,N,M,X,Y;
    cin>>K>>N>>M;
    while(K!=0)
    {
    for(int i=0;i<K;i++)
    {
        cin>>X>>Y;
        if(X>N&&Y>M)
        {
            cout<<"NE\n";
        }
        else
        {
            if(X<N&&Y>M)
            {
                cout<<"NO\n";
            }
            else
            {
                if(X<N&&Y<M)
                {
                    cout<<"SO\n";
                }
                else
                {
                    if(X>N&&Y<M)
                    {
                        cout<<"SE\n";
                    }
                    else
                    {
                        cout<<"divisa\n";
                    }
                }
            }
        }
    }
    cin>>K;
    if(K!=0)
    {
        cin>>N>>M;
    }
    }
    return 0;
}
