#include <iostream>

using namespace std;

int main()
{
    int N,P=1;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cout<<P<<" ";
        cout<<P*P<<" ";
        cout<<P*P*P<<"\n";
        cout<<P<<" ";
        cout<<P*P+1<<" ";
        cout<<P*P*P+1<<"\n";
        P++;
    }

    return 0;
}

