#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double N,S=0;
    int k=0;
    for(int i=0;i<6;i++)
    {
        cin>>N;
        if(N>=0)
        {
            k++;
            S=S+N;
        }
    }
    S=S/k;
    cout<<k<<" valores positivos\n";
    cout<<fixed<<setprecision(1)<<S<<"\n";


    return 0;
}

