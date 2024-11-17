#include <iostream>

using namespace std;

int main()
{
    int T,N[1000],j=0,i;
    cin>>T;
    for(i=0;i<1000;i++)
    {
        if(j==T)
        {
            j=0;
            N[i]=j;
            cout<<"N["<<i<<"] = "<<N[i]<<endl;
            j++;
        }
        else
        {
            N[i]=j;
            cout<<"N["<<i<<"] = "<<N[i]<<endl;
            j++;
        }

    }

    return 0;
}
