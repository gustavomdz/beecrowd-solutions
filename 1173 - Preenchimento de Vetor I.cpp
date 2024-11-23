#include <iostream>

using namespace std;

int main()
{
    int V,X[10];
    cin>>V;
    for(int i=0;i<10;i++)
    {
        X[i]=V;
        V*=2;
    }
    for(int i=0;i<10;i++)
    {
        cout<<"N["<<i<<"] = "<<X[i]<<endl;
    }
}

