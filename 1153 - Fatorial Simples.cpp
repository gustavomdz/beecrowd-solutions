#include <iostream>

using namespace std;

int main() {

    int N=4;
    cin>>N;
    for(int i=N-1;i>=1;i=i-1)
    {
        N=N*i;
    }
    cout<<N<<endl;


    return 0;
}
