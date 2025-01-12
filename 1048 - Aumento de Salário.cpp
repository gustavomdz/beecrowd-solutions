#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float S,RE,P;
    cin>>S;
    if(S>=0&&S<=400.00)
    {
        RE=S*0.15;
        S=RE+S;
        P=15;
    }
    else
    {
        if(S>=400.01&&S<=800)
        {
            RE=S*0.12;
            S=RE+S;
            P=12;
        }
        else
        {
            if(S>=800.01&&S<=1200.00)
            {
                RE=S*0.10;
                S=RE+S;
                P=10;
            }
            else
            {
                if(S>=1200.01&&S<=2000.00)
                {
                    RE=S*0.07;
                    S=RE+S;
                    P=7;
                }
                else
                {
                    if(S>2000.00)
                    {
                        RE=S*0.04;
                        S=RE+S;
                        P=4;
                    }
                }
            }
        }
    }
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<S<<"\n"<<"Reajuste ganho: "<<RE<<"\n";
    cout<<fixed<<setprecision(0)<<"Em percentual: "<<P<<" %\n";
 
    return 0;
}
