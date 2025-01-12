#include <iostream>

using namespace std;

int main() {

    int X=1,Y=1,S=0;
    while(X>0&&Y>0)
    {
        cin>>X>>Y;
        if(X>Y&&X>0&&Y>0)
        {
            while(X>=Y)
            {
                cout<<Y<<" ";
                S=S+Y;
                Y=Y+1;
            }
            cout<<"Sum="<<S<<endl;
            S=0;
        }
        else
        {
            if(X<Y&&X>0&&Y>0)
            {
            while(X<=Y)
            {
                cout<<X<<" ";
                S=S+X;
                X=X+1;
            }
            cout<<"Sum="<<S<<endl;
            S=0;
            }
        }
    }


    return 0;
}

