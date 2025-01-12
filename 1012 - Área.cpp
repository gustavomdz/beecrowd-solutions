#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float A,B,C,TRI,CI,TRA,Q,R;
    cin>>A>>B>>C;
    TRI=A*C/2;
    CI=3.14159*(C*C);
    TRA=(A+B)*C/2;
    Q=B*B;
    R=A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<TRI<<"\n"<<"CIRCULO: "<<CI<<"\n"<<"TRAPEZIO: "<<TRA<<"\n"<<"QUADRADO: "<<Q<<"\n"<<"RETANGULO: "<<R<<"\n";

    return 0;
}

