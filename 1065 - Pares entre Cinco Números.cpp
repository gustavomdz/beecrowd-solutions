#include <iostream>

using namespace std;

int main() {

    int N,k=0;
    for(int i=0;i<5;i++)
    {
        cin>>N;
        if(N%2==0)
        {
            k++;
        }
    }
    cout<<k<<" valores pares\n";


    return 0;
}

