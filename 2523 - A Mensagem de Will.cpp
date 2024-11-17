#include <iostream>

using namespace std;

int main()
{
    string X;
    int N,l;
    while(cin>>X)
    {
        cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>l;
            cout<<X[l-1];
        }
        cout<<endl;
    }

    return 0;
}
