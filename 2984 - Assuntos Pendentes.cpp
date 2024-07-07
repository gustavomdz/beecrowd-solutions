#include <iostream>
#include <list>

using namespace std;

int main()
{
    int X=0;
    list <char> L;
    string aux;
    cin>>aux;
    int t=aux.size();
    for(int i=0;i<t;i++)
    {
        L.push_front(aux[i]);
    }
    for(int i=0;i<t;i++)
    {
        if(L.back()=='(')
        {
            X++;
        }
        if(L.back()==')'&&X>0)
        {
            X--;
        }
        L.pop_back();
    }
    if(X==0)
    {
        cout<<"Partiu RU!\n";
    }
    else {
        cout<<"Ainda temos "<<X<<" assunto(s) pendente(s)!\n";
    }

    return 0;
}
