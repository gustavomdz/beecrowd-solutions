#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int P,C=0,R,j,soma=0,h,d;
    cin>>P;
    while(C<10)
    {
        R=sqrt(P);
        for(j=2;P%j!=0&&j<=R;j++)
        {}
        if(j>R)
        {
            soma+=P;
            C++;
        }
        P++;
    }
    h=60000000/soma;
    d=h/24;
    cout<<soma<<" km/h\n"<<h<<" h / "<<d<<" d\n";

    return 0;
}
