#include <iostream>

using namespace std;

int main() {

    int N,k=0,j=0,l=0,m=0;
    for(int i=0;i<5;i++)
    {
        cin>>N;
        if(N%2==0)
        {
            k++;
        }
        if(N%2!=0)
        {
            j++;
        }
        if(N>0)
        {
            l++;
        }
        if(N<0)
        {
            m++;
        }
    }
    cout<<k<<" valor(es) par(es)\n"<<j<<" valor(es) impar(es)\n"<<l<<" valor(es) positivo(s)\n"<<m<<" valor(es) negativo(s)\n";


    return 0;
}

