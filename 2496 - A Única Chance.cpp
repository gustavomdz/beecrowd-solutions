#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <char> alfa1,alfa2;
    int N,M,cont;
    string aux;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>M>>aux;
        alfa1.clear();
        alfa2.clear();
        for(int j=0;j<M;j++)
        {
            alfa1.push_back(aux[j]);
            alfa2.push_back(aux[j]);
        }
        alfa1.sort();
        cont=0;
        while(!alfa1.empty()&&cont<=2)
        {
            if(alfa1.front()!=alfa2.front())
            {
                cont++;
            }
            alfa1.pop_front();
            alfa2.pop_front();
        }
        if(cont<=2)
        {
            cout<<"There are the chance.\n";
        }
        else {
            cout<<"There aren't the chance.\n";
        }
    }

    return 0;
}
