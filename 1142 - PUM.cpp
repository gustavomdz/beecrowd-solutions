#include <iostream>

using namespace std;

int main()
{
    int N,P=1;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cout<<P<<" ";
        P++;
        cout<<P<<" ";
        P++;
        cout<<P<<" ";
        cout<<"PUM\n";
        P=P+2;
    }

    return 0;
}

