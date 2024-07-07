#include <iostream>

using namespace std;

int main()
{
    int N,cont=0,T;
    string F;
    cin>>N;
    while(cont<N)
    {
        if(cont==0)
        {
            cin.ignore();
        }
        getline(cin, F);
        T=F.size();
        for(int i=0;i<T;i++)
        {
            if(F[i]>=97&&F[i]<=122||F[i]>=65&&F[i]<=90)
            {//é letra maiuscula ou minuscula
                F[i]=F[i]+3;
            }
        }
        string F2;
        for(int j=T-1;j>=0;j--)
        {//inverter
            F2+=F[j];
        }
        for(int i=T/2;i<T;i++)
        {//de metade pra frente deslocar 1
            F2[i]=F2[i]-1;
        }
        cont++;
        cout<<F2<<endl;
    }
    return 0;
}
