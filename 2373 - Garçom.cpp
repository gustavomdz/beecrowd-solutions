#include <iostream>

using namespace std;

int main() {

    int N,L,C,soma=0;
    cin>>N;
    while(N>0)
    {
        cin>>L>>C;
        if(C<L)
        {
            soma+=C;
        }
        N--;
    }
    cout<<soma<<endl;

    return 0;
}
