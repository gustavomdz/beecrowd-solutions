#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int h1,h2,m1,m2,DH,DM;
    cin>>h1>>m1>>h2>>m2;
    DH=h1-h2;
    DM=m1-m2;
    
    if(DH<0&&DM==0)
    {
        DH=abs(DH);
        DM=0;
    }
    else
    {
    if(DH>0&&DM>0)
    {
        DH=23-DH;
        DM=60-(abs(DM));
    }
    else
    {
    if(DH<0&&DM<0)
    {
        DH=abs(DH);
        DM=abs(DM);
    }
    else
    {
    if(DH==0&&DM<0)
    {
        DM=abs(DM);
    }
    else
    {
        if(DH==0&&DM>0)
        {
            DH=24-1;
            DM=60-DM;
        }
        else
        {
            if(DH>0)
            {
                DH=24-DH;
            }
            else
            {
                if(DH<0)
                {
                    DH=(abs(DH))-1;
                }
                else
                {
                    if(DH==0)
                    {
                        DH=24;
                    }
                }
            }
            if(DM>0)
            {
                DM=60-(abs(DM));
            }
            else
            {
                if(DM<0)
                {
                    DM=abs(DM);
                }
                else
                {
                    if(DM==0)
                    {
                        DM=0;
                    }
                }
            }
        }
    }
    }
    }
    }
    cout<<"O JOGO DUROU "<<DH<<" HORA(S) E "<<DM<<" MINUTO(S)\n";
 
    return 0;
}
