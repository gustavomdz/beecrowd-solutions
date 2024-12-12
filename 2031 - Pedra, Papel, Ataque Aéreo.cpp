#include <iostream>

using namespace std;

int main()
{
    string A,B;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
    cin>>A>>B;
    if((A=="ataque"&&B=="pedra")||(A=="pedra"&&B=="papel")||(A=="ataque"&&B=="papel"))
    {
        cout<<"Jogador 1 venceu\n";
    }
    else
    {
        if((B=="ataque"&&A=="pedra")||(B=="pedra"&&A=="papel")||(B=="ataque"&&A=="papel"))
        {
            cout<<"Jogador 2 venceu\n";
        }
        else
        {
            if(A=="papel"&&B=="papel")
            {
                cout<<"Ambos venceram\n";
            }
            else
            {
                if(A=="pedra"&&B=="pedra")
                {
                    cout<<"Sem ganhador\n";
                }
                else
                {
                    if(A=="ataque"&&B=="ataque")
                    {
                        cout<<"Aniquilacao mutua\n";
                    }
                }
            }
        }
    }
    }
}
