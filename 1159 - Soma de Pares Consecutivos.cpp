#include <iostream>

using namespace std;

int main() {

    int X,j=0,S=0;
    cin>>X;
    while(X!=0)
    {
        j=0;
        S=0;
        if(X%2!=0)
        {
            X++;
            while(j<5)
            {
                if(X%2==0)
                {
                    S=S+X;
                    j++;
                }
                X++;
            }
        }
        else
        {
            while(j<5)
            {
                if(X%2==0)
                {
                    S=S+X;
                    j++;
                }
                X++;
            }
        }
        cout<<S<<endl;
        cin>>X;
    }

    return 0;
}

