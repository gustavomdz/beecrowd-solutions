#include <iostream>
#include <list>

using namespace std;

int main()
{
    int N,M;
    list <string> L,L1;
    list <string>::iterator it;
    cin>>N>>M;
    string aux,aux2;
    for(int i=0;i<N*M;i++)
    {
        cin>>aux;
        L.push_front(aux);
    }
    for(it=L.begin();it!=L.end();it++)
    {
        aux=*it;
        aux2=aux[0];
        aux[0]=aux[1];
        aux[1]=aux2[0];
        L1.push_front(aux);
    }
    L1.sort();
    L1.reverse();
    L.clear();
    for(it=L1.begin();it!=L1.end();it++)
    {
        aux=*it;
        aux2=aux[0];
        aux[0]=aux[1];
        aux[1]=aux2[0];
        cout<<aux<<endl;
    }





    return 0;
}
