#include <iostream>

using namespace std;

int main()
{
    unsigned long long int P;
    cin>>P;
    while(P!=-1)
    {
        if(P==0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<P-1<<endl;
        }
        cin>>P;
    }

    return 0;
}
