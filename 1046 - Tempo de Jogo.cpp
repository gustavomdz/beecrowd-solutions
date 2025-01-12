#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int H1,H2,D;
    cin>>H1>>H2;
    if (H1>H2)
    {
        D=abs (H1-H2-24);
    }
    else 
    {
        if (H1==H2)
        {
            D=abs(H1-H2-24);
        }
        else
        {
            if (H1 <H2)
            {
                D=H2-H1;
            }
        }
    }
    cout <<"O JOGO DUROU "<<D<<" HORA(S)\n";
 
    return 0;
}
