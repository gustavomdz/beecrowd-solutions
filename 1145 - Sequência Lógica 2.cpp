#include <iostream>

using namespace std;

int main()
{
    int X,Y,CX=0;
    cin>>X>>Y;
    for(int CY=1;CY<=Y;CY++)
    {
        for(int CX=0;CX<X-1;CX++)
        {
            cout<<CY<<" ";
            CY++;
        }
        cout<<CY<<"\n";
    }

    return 0;
}

