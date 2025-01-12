#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int C,Q;
    double TOTAL;
    cin>>C>>Q;
    if(C==1)
    {
        TOTAL=4*Q;
    }
    else
    {
        if(C==2)
        {
            TOTAL=4.50*Q;
        }
        else
        {
            if(C==3)
            {
                TOTAL=5*Q;
            }
            else
            {
                if(C==4)
                {
                    TOTAL=2*Q;
                }
                else
                {
                    if(C==5)
                    {
                        TOTAL=1.50*Q;
                    }
                }
            }
        }
    }
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<TOTAL<<"\n";
 
    return 0;
}
