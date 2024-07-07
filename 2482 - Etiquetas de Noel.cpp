#include <iostream>
#include <list>

using namespace std;

int main()
{
    int N,M;
    list <string> L,FN;
    list <string>::iterator it,it2;
    string aux,lingua;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>aux;
        L.push_front(aux);
        cin.ignore();
        getline(cin,aux);
        FN.push_front(aux);
    }
    cin>>M;
    for(int i=0;i<M;i++)
    {
        cin.ignore();
        getline(cin,aux);
        cin>>lingua;
        for(it2=FN.begin(),it=L.begin();it!=L.end();it2++,it++)
        {
            if(lingua==*it)
            {
                cout<<aux<<endl<<*it2<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}
