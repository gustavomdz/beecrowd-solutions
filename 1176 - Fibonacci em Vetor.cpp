#include <iostream>

using namespace std;

int main()
{
    int T,N;
    long long int Fib[60];
    Fib[0]=0;
    Fib[1]=1;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        if(N==0||N==1)
        {
            cout<<"Fib("<<N<<") = "<<Fib[N]<<endl;
        }
        else
        {
            for(int j=2;j<=N;j++)
            {
                Fib[j]=Fib[j-1]+Fib[j-2];
            }
            cout<<"Fib("<<N<<") = "<<Fib[N]<<endl;
        }
    }

    return 0;
}

