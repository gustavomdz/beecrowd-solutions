#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double I,G,ng=1,QG=0,VI=0,VG=0,E=0;
    while(ng==1)
    {
        cin>>I>>G;
        QG++;
        if(I>G)
        {
            VI++;
        }
        else
        {
            if(I<G)
            {
                VG++;
            }
            else
            {
                if(I==G)
                {
                    E++;
                }
            }
        }
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>ng;
    }
    cout<<QG<<" grenais\n"<<"Inter:"<<VI<<endl<<"Gremio:"<<VG<<endl<<"Empates:"<<E<<endl;
    if(VI>VG)
    {
        cout<<"Inter venceu mais\n";
    }
    else
    {
        if(VI<VG)
        {
            cout<<"Gremio venceu mais\n";
        }
        else
        {
            if(VI==VG)
            {
                cout<<"Nao houve vencedor\n";
            }
        }
    }


    return 0;
}

