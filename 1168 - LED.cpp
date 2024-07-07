#include <iostream>

using namespace std;

int main()
{
    int N,cont=0,t,cont2;
    string num;
    cin>>N;
    while(cont<N)
    {
        cin>>num;
        cont2=0;
        t=num.size();
        for(int i=0;i<t;i++)
        {
            if(num[i]=='1')
            {
                cont2+=2;
            }
            else
            {
                if(num[i]=='2')
                {
                    cont2+=5;
                }
                else
                {
                    if(num[i]=='3')
                    {
                        cont2+=5;
                    }
                    else
                    {
                        if(num[i]=='4')
                        {
                            cont2+=4;
                        }
                        else
                        {
                            if(num[i]=='5')
                            {
                                cont2+=5;
                            }
                            else
                            {
                                if(num[i]=='6')
                                {
                                    cont2+=6;
                                }
                                else
                                {
                                    if(num[i]=='7')
                                    {
                                        cont2+=3;
                                    }
                                    else
                                    {
                                        if(num[i]=='8')
                                        {
                                            cont2+=7;
                                        }
                                        else
                                        {
                                            if(num[i]=='9')
                                            {
                                                cont2+=6;
                                            }
                                            else
                                            {
                                                if(num[i]=='0')
                                                {
                                                    cont2+=6;
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
        cout<<cont2<<" leds\n";
        cont++;
    }
    return 0;
}
