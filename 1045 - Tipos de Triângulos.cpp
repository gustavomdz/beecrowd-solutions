#include <iostream>

using namespace std;


int main() {

    double A,B,C,aux;
    cin>>A>>B>>C;
    if(B>A)
    {
        aux=A;
        A=B;
        B=aux;
    }
    if(C>A)
    {
        aux=A;
        A=C;
        C=aux;
    }
    if(C>B)
    {
        aux=B;
        B=C;
        C=aux;
    }
    if(A>=B+C)
    {
        cout<<"NAO FORMA TRIANGULO\n";
    }
    else
    {
        if(A*A==B*B+C*C)
        {
            cout<<"TRIANGULO RETANGULO\n";
        }
        else
        {
            if(A*A>B*B+C*C)
            {
                cout<<"TRIANGULO OBTUSANGULO\n";
            }
            else
            {
                if(A*A<B*B+C*C)
                {
                    cout<<"TRIANGULO ACUTANGULO\n";
                }
            }
        }
        if(A==B&&B==C&&A==C)
        {
            cout<<"TRIANGULO EQUILATERO\n";
        }
        else
        {
            if(A==B||B==C||C==A)
            {
                cout<<"TRIANGULO ISOSCELES\n";
            }
        }
    }

    return 0;
}

