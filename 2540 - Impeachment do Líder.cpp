#include <iostream>

using namespace std;

int main()
{
    float Y;
    int QV,X,N;
    while(cin>>N)
    {
        Y=(float)N*2/3;
        QV=0;
        for(int i=0;i<N;i++)
        {
            cin>>X;
            if(X==1)
            {
                QV++;
            }
        }
        if(QV>=Y)
        {
            cout<<"impeachment\n";
        }
        else
        {
            cout<<"acusacao arquivada\n";
        }
    }
    return 0;
}
