#include <iostream>

using namespace std;

int main() {

    int N,X,Y,S=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>X>>Y;
        if(X<=Y)
        {
            for(X=X+1;X<Y;X++)
            {
                if(X%2!=0)
                {
                    S=S+X;
                }
            }
            cout<<S<<endl;
            S=0;
        }
        else
        {
            if(X>Y)
            {
            for(X=X-1;X>Y;X=X-1)
            {
                if(X%2!=0)
                {
                    S=S+X;
                }
            }
            cout<<S<<endl;
            S=0;
            }
        }
    }

    return 0;
}

