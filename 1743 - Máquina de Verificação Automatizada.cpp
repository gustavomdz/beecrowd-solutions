#include <iostream>

using namespace std;

int main()
{
    int C,C1,C2,C3,C4,T,T1,T2,T3,T4;
    cin>>C>>C1>>C2>>C3>>C4>>T>>T1>>T2>>T3>>T4;
    if(C==T||C1==T1||C2==T2||C3==T3||C4==T4)
    {
        cout<<"N\n";
    }
    else
    {
        cout<<"Y\n";
    }
    return 0;
}

