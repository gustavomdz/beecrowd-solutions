#include <iostream>

using namespace std;

int main()
{
    int S=0,A;
    for(int i=0;i<9;i++)
    {
        cin>>A;
        S=S+A;
    }
    while(S>9)
    {
        S=S-9;
    }
    if(S==1)
    {
        cout<<"Dasher\n";
    }
    else
    {
        if(S==2)
        {
            cout<<"Dancer\n";
        }
        else
        {
            if(S==3)
            {
                cout<<"Prancer\n";
            }
            else
            {
                if(S==4)
                {
                    cout<<"Vixen\n";
                }
                else
                {
                    if(S==5)
                    {
                        cout<<"Comet\n";
                    }
                    else
                    {
                        if(S==6)
                        {
                            cout<<"Cupid\n";
                        }
                        else
                        {
                            if(S==7)
                            {
                                cout<<"Donner\n";
                            }
                            else
                            {
                                if(S==8)
                                {
                                    cout<<"Blitzen\n";
                                }
                                else
                                {
                                    if(S==9)
                                    {
                                        cout<<"Rudolph\n";
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

