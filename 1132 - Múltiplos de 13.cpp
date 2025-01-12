#include <iostream>

using namespace std;

int main() {

    int X,Y,S;
    cin>>X>>Y;
    if(X<Y)
    {
        for(S=0;X<=Y;X++)
        {
            if(X%13!=0)
            {
                S=S+X;
            }
        }
        cout<<S<<endl;
    }
    else
    {
        if(X>Y)
        {
            for(S=0;Y<=X;Y++)
            {
                if(Y%13!=0)
                {
                    S=S+Y;
                }
            }
            cout<<S<<endl;
        }
    }


    return 0;
}

