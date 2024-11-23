#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,m,D,D2,S;
    while(cin>>n>>m)
    {
        S=0;
        n-=1;
        D=0;
        while(D!=1)
        {
            D=pow(10,n);
            D2=m/D;
            S=S+D2;
            m=m%D;
            n--;
        }
        if(S%3==0)
        {
            cout<<S<<" sim\n";
        }
        else
        {
            cout<<S<<" nao\n";
        }
    }
    return 0;
}

