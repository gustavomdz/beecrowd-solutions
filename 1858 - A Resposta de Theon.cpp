#include <iostream>

using namespace std;

int main()
{
    int N,M=20,pos,T;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>T;
        if(T<M)
        {
            M=T;
            pos=i;
        }
    }
    cout<<pos<<endl;
    return 0;
}

