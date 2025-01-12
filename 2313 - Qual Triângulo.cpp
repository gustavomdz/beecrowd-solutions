#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B,C;
    cin>>A>>B>>C;
    if(A+B<=C||A+C<=B||C+B<=A)
    {
        cout<<"Invalido\n";
    }
    else
    {
        if(A==B&&B==C)
        {
            cout<<"Valido-Equilatero\n";
        }
        else
        {
            if(A!=B&&B!=C&&A!=C)
            {
                cout<<"Valido-Escaleno\n";
            }
            else
            {
                if(A==B||A==C||B==C)
                {
                    cout<<"Valido-Isoceles\n";
                }
            }
        }
        if(A*A==B*B+C*C)
        {
            cout<<"Retangulo: S\n";
        }
        else
        {
            if(A*A!=B*B+C*C)
            {
                cout<<"Retangulo: N\n";
            }
        }
    }
 
    return 0;
}
