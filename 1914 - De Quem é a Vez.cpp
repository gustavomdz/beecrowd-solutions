#include <iostream>

using namespace std;

int main()
{
    string NF,NS,PIF,PIS;
    int NuF,NuS,S,QT;
    cin>>QT;
    for(int i=0;i<QT;i++)
    {
        cin>>NF>>PIF>>NS>>PIS>>NuF>>NuS;
        S=NuF+NuS;
        if(S%2==0)
        {
            if(PIF=="PAR")
            {
                cout<<NF<<endl;
            }
            else
            {
                cout<<NS<<endl;
            }
        }
        else
        {
            if(PIF=="IMPAR")
            {
                cout<<NF<<endl;
            }
            else
            {
                cout<<NS<<endl;
            }
        }
    }
    return 0;
}
