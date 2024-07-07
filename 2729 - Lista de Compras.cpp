#include <iostream>
#include <list>

using namespace std;

int main()
{
    int N,t,i,j;
    list <string> L;
    string aux,aux2;
    cin>>N;
    for(int l=0;l<N;l++)
    {
        aux.clear();
        aux2.clear();
        if(l==0)
            cin.ignore();
        getline(cin,aux);
        t=aux.size();
        for(i=0,j=0;i<t;i++)
        {
            if(aux[i]==' ')
            {
                for(;j<i;j++)
                {
                    aux2+=aux[j];
                }
                L.push_front(aux2);
                aux2.clear();
                j++;
            }
        }
        for(;j<t;j++)
        {
            aux2+=aux[j];
        }
        L.push_front(aux2);
        L.sort();
        L.unique();
        t=L.size();
        for(int k=0;k<t;k++)
        {
            if(k==t-1)
            {
                cout<<L.front();
            }
            else {
                cout<<L.front()<<" ";
            }
            L.pop_front();
        }
        cout<<endl;
    }

    return 0;
}
