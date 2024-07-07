#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int N,LA,LB,SA,SB;
    cin>>N>>LA>>LB>>SA>>SB;
    if(N<LA||N>LB||N<SA||N>SB)
    {
        cout<<"impossivel\n";
    }
    else
    {
        cout<<"possivel\n";
    }

    return 0;
}
