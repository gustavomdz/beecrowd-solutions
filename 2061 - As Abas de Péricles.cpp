#include <iostream>

using namespace std;

int main()
{
    string fc;
    int N,M;
    cin>>N>>M;
    for(int i=0;i<M;i++)
    {
        cin>>fc;
        if(fc=="fechou")
        {
            N=N+1;
        }
        else
        {
            if(fc=="clicou")
            {
                N=N-1;
            }
        }
    }
    cout<<N<<endl;



    return 0;
}
