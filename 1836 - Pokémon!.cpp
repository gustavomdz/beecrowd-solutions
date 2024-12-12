#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int L,T,IV,B,HP,AT,DF,SP,EV;
    string P;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>P>>L>>B>>IV>>EV;
        HP=(IV+B+sqrt(EV)/8+50)*L/50+10;
        cin>>B>>IV>>EV;
        AT=(IV+B+sqrt(EV)/8)*L/50+5;
        cin>>B>>IV>>EV;
        DF=(IV+B+sqrt(EV)/8)*L/50+5;
        cin>>B>>IV>>EV;
        SP=(IV+B+sqrt(EV)/8)*L/50+5;
        cout<<"Caso #"<<i<<": "<<P<<" nivel "<<L<<endl;
        cout<<"HP: "<<HP<<endl;
        cout<<"AT: "<<AT<<endl;
        cout<<"DF: "<<DF<<endl;
        cout<<"SP: "<<SP<<endl;
    }


    return 0;
}
