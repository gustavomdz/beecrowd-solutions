#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double M[12][12],S=0,k=11,m=1;
    char O;
    cin>>O;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>M[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=m;j<k;j++)
        {
            S+=M[i][j];
        }
        k--;
        m++;
    }
    if(O=='S')
    {
        cout<<fixed<<setprecision(1)<<S<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1)<<S/30<<endl;
    }

    return 0;
}
