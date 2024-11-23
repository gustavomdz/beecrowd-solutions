#include <iostream>

using namespace std;

int main()
{
    int N,A,B,C,D,E,P;
    char altern;
    cin>>N;
    while(N!=0)
    {P=0;
    for(int i=0;i<N;i++)
    {
        P=0;
        cin>>A>>B>>C>>D>>E;
        if(A<=127)
        {
            P++;
            altern='A';
        }
        if(B<=127)
        {
            P++;
            altern='B';
        }
        if(C<=127)
        {
            P++;
            altern='C';
        }
        if(D<=127)
        {
            P++;
            altern='D';
        }
        if(E<=127)
        {
            P++;
            altern='E';
        }
        if(P==1)
        {
            cout<<altern<<endl;
        }
        else
        {
            cout<<"*\n";
        }
    }
    cin>>N;
    }
    return 0;
}

