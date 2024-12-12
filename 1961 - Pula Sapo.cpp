#include <iostream>
using namespace std;
int main()
{
    int P,N,diferenca=0,j=0,A,B=0;
    cin>>P>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A;
        if(A>diferenca)
        {
            diferenca=A-diferenca;
        }
        else
        {
            diferenca=diferenca-A;
        }
        if(diferenca>P&&i>0)
        {
            j++;
        }
        diferenca=A;
    }
    if(j>0)
    {
        cout<<"GAME OVER\n";
    }
    else
    {
        cout<<"YOU WIN\n";
    }


    return 0;
}
