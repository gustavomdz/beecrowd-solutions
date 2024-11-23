#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int N,R,X,j;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>X;
        R=sqrt(X);
        for(j=2;X%j!=0&&j<=R;j++);
        if(j>R)
        {
            cout<<X<<" eh primo\n";
        }
        else
        {
            cout<<X<<" nao eh primo\n";
        }
    }
 
    return 0;
}
