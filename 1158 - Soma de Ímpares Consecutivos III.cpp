#include <iostream>

using namespace std;

int main() {

    int N,X,Y,j=0,S=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>X>>Y;
        j=0;
        S=0;
        if(X%2==0)
        {
            X++;
            while(j<Y)
            {
                if(X%2!=0)
                {
                    S=S+X;
                    j++;
                }
                X++;
            }
        }
        else
        {
            while(j<Y)
            {
                if(X%2!=0)
                {
                    S=S+X;
                    j++;
                }
                X++;
            }
        }
        cout<<S<<endl;
    }

    return 0;
}

