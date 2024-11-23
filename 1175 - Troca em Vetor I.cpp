#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float N[20],aux;
    for(int i=0;i<20;i++)
    {
        cin>>N[i];
    }
    for(int i=0,j=19;i<10&&j>9;i++,j--)
    {
        aux=N[i];
        N[i]=N[j];
        N[j]=aux;
    }
    for(int i=0;i<20;i++)
    {
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }

}

