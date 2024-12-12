#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X=0;
    double S=0,i=0,M;
    while(X>=0)
    {
        cin>>X;
        if(X>=0)
        {
            S=S+X;
            i++;
        }
    }
    M=S/i;
    cout<<fixed<<setprecision(2)<<M<<endl;


    return 0;
}
