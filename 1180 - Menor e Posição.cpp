#include <iostream>

using namespace std;

int main()
{
    int N,M=1000,j;
    cin>>N;
    int X[N];
    for(int i=0;i<N;i++)
    {
        cin>>X[i];
        if(X[i]<M)
        {
            M=X[i];
            j=i;
        }
    }
    cout<<"Menor valor: "<<M<<endl;
    cout<<"Posicao: "<<j<<endl;

    return 0;
}
