#include <iostream>

using namespace std;

int main() {

    int X=1,Y=1;
    while(X!=0&&Y!=0)
    {
        cin>>X>>Y;
        if(X>0&&Y>0)
        {
            cout<<"primeiro\n";
        }
        else
        {
            if(X<0&&Y>0)
            {
                cout<<"segundo\n";
            }
            else
            {
                if(X<0&&Y<0)
                {
                    cout<<"terceiro\n";
                }
                else
                {
                    if(X>0&&Y<0)
                    {
                        cout<<"quarto\n";
                    }
                }
            }
        }
    }

    return 0;
}

