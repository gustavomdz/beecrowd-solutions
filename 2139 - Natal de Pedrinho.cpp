#include <iostream>

using namespace std;

int main()
{
    int a,b,S;
    while(cin>>a)
    {
        cin>>b;
        if(a==12&&b==25)
        {
            cout<<"E natal!\n";
        }
        else
        {
            if(a==12&&b==24)
            {
                cout<<"E vespera de natal!\n";
            }
            else
            {
                if(a==12&&b>25)
                {
                    cout<<"Ja passou!\n";
                }
                else
                {//imprima dentro desse else
                    if(a==1)
                    {
                        S=360-b;
                    }
                    else
                    {
                        if(a==2)
                        {
                            S=360-(31+b);
                        }
                        else
                        {
                            if(a==3)
                            {
                                S=360-(31+29+b);
                            }
                            else
                            {
                                if(a==4)
                                {
                                    S=360-(31+29+31+b);
                                }
                                else
                                {
                                    if(a==5)
                                    {
                                        S=360-(31+29+31+30+b);
                                    }
                                    else
                                    {
                                        if(a==6)
                                        {
                                            S=360-(31+29+31+30+31+b);
                                        }
                                        else
                                        {
                                            if(a==7)
                                            {
                                                S=360-(31+29+31+30+31+30+b);
                                            }
                                            else
                                            {
                                                if(a==8)
                                                {
                                                    S=360-(31+29+31+30+31+30+31+b);
                                                }
                                                else
                                                {
                                                    if(a==9)
                                                    {
                                                        S=360-(31+29+31+30+31+30+31+31+b);
                                                    }
                                                    else
                                                    {
                                                        if(a==10)
                                                        {
                                                            S=360-(31+29+31+30+31+30+31+31+30+b);
                                                        }
                                                        else
                                                        {
                                                            if(a==11)
                                                            {
                                                                S=360-(31+29+31+30+31+30+31+31+30+31+b);
                                                            }
                                                            else
                                                            {
                                                                if(a==12)
                                                                {
                                                                    S=361-(31+29+31+30+31+30+31+31+30+31+31+b);
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
                    cout<<"Faltam "<<S<<" dias para o natal!\n";
                }
            }
        }
    }
    return 0;
}
