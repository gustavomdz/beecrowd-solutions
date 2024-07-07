#include <iostream>
#include <list>
#include <iomanip>

using namespace std;

int main()
{
    list <string> L1;
    list <double> P1;
    list <string>::iterator it;
    list <double>::iterator it2;
    string aux;
    double aux2,total=0;
    int N,M,Q;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        total=0;
        P1.clear();
        L1.clear();
        cin>>M;
        for(int j=0;j<M;j++)
        {
            cin>>aux;
            L1.push_front(aux);
            cin>>aux2;
            P1.push_front(aux2);
        }
        cin>>M;
        for(int j=0;j<M;j++)
        {
            cin>>aux>>Q;
            for(it=L1.begin(),it2=P1.begin();it!=L1.end();it++,it2++)
            {
                if(aux==*it)
                {
                    total+=(*it2)*Q;
                }
            }
        }
        cout<<fixed<<setprecision(2)<<"R$ "<<total<<endl;
    }

    return 0;
}
