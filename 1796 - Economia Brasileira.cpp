#include <iostream>

using namespace std;

int main()
{
    int Q,V,S=0,N=0;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        cin>>V;
        if(V==0)
        {
            S++;
        }
        else
        {
            N++;
        }
    }
    if(S>N)
    {
        cout<<"Y\n";
    }
    else
    {
        cout<<"N\n";
    }
    return 0;
}

