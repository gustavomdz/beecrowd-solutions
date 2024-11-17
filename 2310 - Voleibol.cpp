#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N,S,B,A,S1,B1,A1,SOMA[3],SOMA1[3];
    string lixo;
    for(int i=0;i<3;i++)
    {
        SOMA[i]=0;
        SOMA1[i]=0;
    }
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>lixo;
        cin>>S>>B>>A;
        cin>>S1>>B1>>A1;
        SOMA[0]=S+SOMA[0];
        SOMA[1]=B+SOMA[1];
        SOMA[2]=A+SOMA[2];
        SOMA1[0]=S1+SOMA1[0];
        SOMA1[1]=B1+SOMA1[1];
        SOMA1[2]=A1+SOMA1[2];
    }
    cout<<fixed<<setprecision(2)<<"Pontos de Saque: "<<(float)SOMA1[0]*100/SOMA[0]<<" %.\n";
    cout<<fixed<<setprecision(2)<<"Pontos de Bloqueio: "<<(float)SOMA1[1]*100/SOMA[1]<<" %.\n";
    cout<<fixed<<setprecision(2)<<"Pontos de Ataque: "<<(float)SOMA1[2]*100/SOMA[2]<<" %.\n";

    return 0;
}
