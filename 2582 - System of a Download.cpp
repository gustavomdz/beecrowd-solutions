#include <iostream>

using namespace std;

int main()
{
    int C,S,X,Y;
    cin>>C;
    for(int i=0;i<C;i++)
    {
        cin>>X>>Y;
        S=X+Y;
        if(S==0)
        {
            cout<<"PROXYCITY\n";
        }
        else
        {
            if(S==1)
            {
                cout<<"P.Y.N.G.\n";
            }
            else
            {
                if(S==2)
                {
                    cout<<"DNSUEY!\n";
                }
                else
                {
                    if(S==3)
                    {
                        cout<<"SERVERS\n";
                    }
                    else
                    {
                        if(S==4)
                        {
                            cout<<"HOST!\n";
                        }
                        else
                        {
                            if(S==5)
                            {
                                cout<<"CRIPTONIZE\n";
                            }
                            else
                            {
                                if(S==6)
                                {
                                    cout<<"OFFLINE DAY\n";
                                }
                                else
                                {
                                    if(S==7)
                                    {
                                        cout<<"SALT\n";
                                    }
                                    else
                                    {
                                        if(S==8)
                                        {
                                            cout<<"ANSWER!\n";
                                        }
                                        else
                                        {
                                            if(S==9)
                                            {
                                                cout<<"RAR?\n";
                                            }
                                            else
                                            {
                                                if(S==10)
                                                {
                                                    cout<<"WIFI ANTENNAS\n";
                                                }
                                            }
                                        }
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
