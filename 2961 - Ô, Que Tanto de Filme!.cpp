#include <iostream>
#include <list>

using namespace std;

int main()
{
    //1- Melhor Filme,2- Melhor Diretor,3- Melhor Atriz,4- Melhor Ator
    int cat[4],N,k,cont=0;
    for(int i=0;i<4;i++)
    {
        cat[i]=0;
    }
    list <string> P,V;
    list <string>::iterator it,it2;
    string L;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>L;
        for(int j=0;j<4;j++)
        {
            cin.ignore();
            getline(cin,L);
            P.push_back(L);
        }
        cin>>L;
        for(int j=0;j<4;j++)
        {
            cin.ignore();
            getline(cin,L);
            V.push_back(L);
        }
        for(k=0,it=P.begin(),it2=V.begin();k<4;k++,it++,it2++)
        {
            if(*it==*it2)
            {
                cat[k]++;
            }
        }
        P.clear();
        V.clear();
    }
    if(cat[0]==0)
    {
        cout<<1;
        cont++;
    }
    if(cat[1]==0)
    {
        if(cont>0)
            cout<<" "<<2;
        else{
            cout<<2;
        }
        cont++;
    }
    if(cat[2]==0)
    {
        if(cont>0)
            cout<<" "<<3;
        else {
            cout<<3;
        }
        cont++;
    }
    if(cat[3]==0)
    {
        if(cont>0)
            cout<<" "<<4;
        else {
            cout<<4;
        }
    }
    cout<<endl;

    return 0;
}
