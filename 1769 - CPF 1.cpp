#include <iostream>

using namespace std;

int main()

{
    int M,M2,k,l,B1,B2,a,D1,D2,D3,D4,D5,D6,D7,D8,D9;
    char ponto;
    while(cin>>a)
    {
        k=1;
        l=9;
        M=0;
        M2=0;
        D1=a/100;
        D2=(a%100)/10;
        D3=(a%100)%10;
        cin>>ponto;
        M=D1*k+M;
        k++;
        M=D2*k+M;
        k++;
        M=D3*k+M;
        k++;
        M2=D1*l+M2;
        l--;
        M2=D2*l+M2;
        l--;
        M2=D3*l+M2;
        l--;
        cin>>a;
        D4=a/100;
        D5=(a%100)/10;
        D6=(a%100)%10;
        cin>>ponto;
        M=D4*k+M;
        k++;
        M=D5*k+M;
        k++;
        M=D6*k+M;
        k++;
        M2=D4*l+M2;
        l--;
        M2=D5*l+M2;
        l--;
        M2=D6*l+M2;
        l--;
        cin>>a;
        D7=a/100;
        D8=(a%100)/10;
        D9=(a%100)%10;
        cin>>ponto;
        M=D7*k+M;
        k++;
        M=D8*k+M;
        k++;
        M=D9*k+M;
        k++;
        M2=D7*l+M2;
        l--;
        M2=D8*l+M2;
        l--;
        M2=D9*l+M2;
        l--;
        cin>>a;
        B1=a/10;
        B2=a%10;
        M=M%11;
        M2=M2%11;
        if(M==10)
        {
            M=0;
        }
        if(M2==10)
        {
            M2=0;
        }
        if(M==B1&&M2==B2)
        {
            cout<<"CPF valido\n";
        }
        else
        {
            cout<<"CPF invalido\n";
        }
    }
    return 0;
}

