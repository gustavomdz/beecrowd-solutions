#include <iostream>

using namespace std;

int main()
{
    int N1,N2,N3,N4,j=0,V=0,l=0;
    cin>>N1>>N2;
    if(N2<=N1&&j==0)
    {
        V=N1+1;
        l++;
        j++;
    }
    while(cin>>N3>>N4)
    {
        if(N3<=N2&&j==0)
        {
            V=N2+1;
            l++;
            j++;
        }
        else
        {
            if(N4<=N3&&j==0)
            {
                V=N3+1;
                j++;
            }
        }
        N1=N3;
        N2=N4;
    }
    if(V!=0)
    {
        cout<<V<<endl;
    }
    else
    {
        if(l==1)
        {
            cout<<N1+1<<endl;
        }
        else
        {
            cout<<N2+1<<endl;
        }
    }

    return 0;
}

