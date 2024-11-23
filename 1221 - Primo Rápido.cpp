#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N,X,j,R;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>X;
        R=sqrt(X);
        for(j=2;X%j!=0&&j<=R;j++)
        {}
        if(j>R)
        {
            cout<<"Prime\n";
        }
        else
        {
            cout<<"Not Prime\n";
        }
    }

    return 0;
}

