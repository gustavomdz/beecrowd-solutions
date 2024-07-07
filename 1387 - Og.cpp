#include <iostream>

using namespace std;

int main()
{
    int L, R;
    R=L=1;
    while(R!=0||L!=0)
    {
        cin>>L>>R;
        if(L!=0&&R!=0)
        {
            cout<<L+R<<endl;
        }
    }

    return 0;
}
