#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double S=0,M[12][12];
    int L;
    char T;
    cin>>L>>T;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>M[i][j];
        }
    }
    for(int j=0;j<12;j++)
    {
        S+=M[L][j];
    }
    if(T=='S')
    {
        cout<<fixed<<setprecision(1)<<S<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1)<<S/12<<endl;
    }

    return 0;
}
