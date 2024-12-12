#include <iostream>
using namespace std;
int main()
{
    int A,D,B,C,MENOR,k;
    cin>>A>>D;
    while(A!=0&&D!=0)
    {
    MENOR=100000;
    k=0;
    for(int i=0;i<A;i++)
    {
        cin>>B;
        if(B<=MENOR)
        {
            MENOR=B;
        }
    }
    for(int j=0;j<D;j++)
    {
        cin>>C;
        if(C<=MENOR)
        {
            k++;
        }
    }
    if(k>=2)
    {
        cout<<"N\n";
    }
    else
    {
        cout<<"Y\n";
    }
    cin>>A>>D;
    }



    return 0;
}
