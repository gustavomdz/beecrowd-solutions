#include <iostream>

using namespace std;
int maisveloz(int L)
{
    int MV,V;
    for(int i=0;i<L;i++)
    {
        cin>>V;
        if(i==0)
        {
            MV=V;
        }
        else
        {
            if(V>MV)
            {
                MV=V;
            }
        }
    }
    return MV;
}
int nivel(int MV)
{
    if(MV<10)
    {
        return 1;
    }
    if(MV>=10&&MV<20)
    {
        return 2;
    }
    if(MV>=20)
    {
        return 3;
    }
}
int main() {

    int L;
    while(cin>>L)
    {
        cout<<nivel(maisveloz(L))<<endl;
    }

    return 0;
}
