#include <iostream>

using namespace std;
long long int quantidade(long long int X)
{
    int qt=1;
    while(X/10!=0)
    {
        qt++;
        X=X/10;
    }
    return qt;
}
long long int inverter(long long int Y,long long int *V,long long int q)
{
    for(int i=0;i<q;i++)
    {
        V[i]=Y%10;
        Y=Y/10;
    }
}
int main()
{
    long long int N,q;
    scanf ("%llu",&N);
    q=quantidade(N);
    long long int V[q];
    inverter(N,V,q);
    for(int i=0;i<q;i++)
    {
        cout<<V[i];
    }
    cout<<endl;

    return 0;
}
