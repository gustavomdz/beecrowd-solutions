#include <iostream>

using namespace std;

int main()
{
    int X=1;
    while(X!=0)
    {
        cin>>X;
        for(int CX=1;CX<X;CX++)
        {
            cout<<CX<<" ";
        }
        if(X!=0)
        {
        cout<<X<<endl;
        }
    }

    return 0;
}

