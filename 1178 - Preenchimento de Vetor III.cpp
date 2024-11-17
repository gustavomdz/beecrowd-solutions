#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double T,N[100];
    int i;
    cin>>T;
    for(i=0;i<100;i++)
    {
        N[i]=T;
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<N[i]<<endl;
        T=T/2;
    }

    return 0;
}
