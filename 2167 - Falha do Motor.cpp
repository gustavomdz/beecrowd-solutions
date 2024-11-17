#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N,j;
    cin>>N;
    int R[N];
    for(int i=0;i<N;i++)
    {
        cin>>R[i];
    }
    for(j=1;R[j]>=R[j-1];j++);
    if(j<N)
    {
        cout<<j+1<<endl;
    }
    else
    {
        cout<<"0\n";
    }

    return 0;
}
