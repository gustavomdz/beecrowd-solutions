#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    double GD,N1,MAIOR=0,MENOR=11,SOMA=0;
    string nome;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        SOMA=0;
        MENOR=11;
        MAIOR=0;
        cin>>nome;
        cin>>GD;
        for(int j=0;j<7;j++)
        {
        cin>>N1;
        SOMA=SOMA+N1;
        if(N1>MAIOR)
        {
            MAIOR=N1;
        }
        if(N1<MENOR)
        {
            MENOR=N1;
        }
        }
        SOMA-=MENOR;
        SOMA-=MAIOR;
        SOMA*=GD;
        cout<<nome<<" "<<fixed<<setprecision(2)<<SOMA<<endl;
    }





    return 0;
}
