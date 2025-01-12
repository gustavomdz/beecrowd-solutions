#include <iostream>

using namespace std;

int main() {

    int A=0,G=0,D=0,X;
    while(X!=4)
    {
        cin>>X;
        if(X==1)
        {
            A++;
        }
        else
        {
            if(X==2)
            {
                G++;
            }
            else
            {
                if(X==3)
                {
                    D++;
                }
            }
        }
    }
    cout<<"MUITO OBRIGADO\n"<<"Alcool: "<<A<<endl<<"Gasolina: "<<G<<endl<<"Diesel: "<<D<<endl;

    return 0;
}

