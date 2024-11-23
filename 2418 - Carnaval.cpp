#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float MA=0,ME=11,S=0,T;
    for(int i=0;i<5;i++)
    {
        cin>>T;
        if(T>MA)
        {
            MA=T;
        }
        if(T<ME)
        {
            ME=T;
        }
        S+=T;
    }
    S-=(MA+ME);
    cout<<fixed<<setprecision(1)<<S<<endl;
    return 0;
}

