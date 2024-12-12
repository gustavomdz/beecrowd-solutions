#include <iostream>

using namespace std;

int main() {

    int n[46],X,i;
    n[0]=0;
    n[1]=1;
    cin>>X;
    for(i=2;i<46;i++)
    {
        n[i]=n[i-1]+n[i-2];
    }
    for(i=0;i<X-1;i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<n[i]<<endl;
    return 0;
}
