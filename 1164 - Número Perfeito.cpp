#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,j,S,X;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        S=0;
        cin>>X;
        for(j=1;j<X;j++)
        {
            if(X%j==0)
            {
                S=S+j;
            }
        }
        if(S==X)
        {
            cout<<X<<" eh perfeito\n";
        }
        else
        {
            cout<<X<<" nao eh perfeito\n";
        }
    }
 
    return 0;
}
