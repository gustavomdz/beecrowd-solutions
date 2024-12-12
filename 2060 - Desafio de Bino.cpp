#include <iostream>

using namespace std;

int main()
{
    int i=0,j=0,k=0,m=0,N,L;
    cin>>N;
    for(int o=0;o<N;o++)
    {
        cin>>L;
        if(L%2==0)
        {
            i++;
        }
        if(L%3==0)
        {
            j++;
        }
        if(L%4==0)
        {
           k++;
        }
        if(L%5==0)
        {
            m++;
        }
    }
    cout<<i<<" Multiplo(s) de 2\n";
    cout<<j<<" Multiplo(s) de 3\n";
    cout<<k<<" Multiplo(s) de 4\n";
    cout<<m<<" Multiplo(s) de 5\n";


    return 0;
}
