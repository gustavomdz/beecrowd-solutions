#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int A,B,C,M;
    float V;
    cin>>A>>B>>C;
    while(A!=0||B!=0||C!=0)
    {
        M=A*B*C;
        V=pow(M,1.0/3.0);
        cout<<int(V)<<endl;
        cin>>A>>B>>C;
    }

    return 0;
}
