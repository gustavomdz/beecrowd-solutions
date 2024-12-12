#include <iostream>

using namespace std;

int main()
{
    int X=-99999,Z=-99999,S,i;
    cin>>X;
    while(X>=Z)
    {
        cin>>Z;
    }
    for(i=0,S=0;S<=Z;i++,X++)
    {
        S=S+X;
    }
    cout<<i<<endl;


    return 0;
}
