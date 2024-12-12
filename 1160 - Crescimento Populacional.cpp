#include <iostream>

using namespace std;

int main() {

    int PA,PB,T,j;
    double G1,G2;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>PA>>PB>>G1>>G2;
        for(j=0;PA<=PB;j++)
        {
            PA=PA+PA*(G1/100);
            PB=PB+PB*(G2/100);
            if(j>100)
            {
                break;
            }
        }
        if(j>100)
        {
            cout<<"Mais de 1 seculo.\n";
        }
        else
        {
            cout<<j<<" anos.\n";
        }
    }


    return 0;
}
