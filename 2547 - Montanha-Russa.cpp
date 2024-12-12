#include <iostream>

using namespace std;

int main()
{
    int N,Amin,Amax,min,X;
    while(cin>>N)
    {
        min=0;
        cin>>Amin>>Amax;
        for(int i=0;i<N;i++)
        {
            cin>>X;
            if(X<=Amax&&X>=Amin)
            {
                min++;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
