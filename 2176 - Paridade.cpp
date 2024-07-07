#include <iostream>

using namespace std;
int contador(char *V,int T)
{
    int u=0;
    for(int i=0;i<T;i++)
    {
        if(V[i]=='1')
        {
            u++;
        }
    }
    if(u%2==0)
    {
        V[T]='0';
    }
    else {
        V[T]='1';
    }
}
int main()
{
    string S;
    int T;
    cin>>S;
    T= S.size();
    char V[T+1];
    for(int i=0;i<T;i++)
    {
        V[i]=S[i];
    }
    contador(V,T);
    for(int i=0;i<=T;i++)
    {
        cout<<V[i];
    }
    cout<<endl;

    return 0;
}
