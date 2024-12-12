#include <iostream>

using namespace std;

int main() {

    int N,A,X;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>X;
        if(X<2015)
        {
            A=2015-X;
            cout<<A<<" D.C.\n";
        }
        else
        {
            if(X>2015||X==2015)
            {
                A=X-2015+1;
                cout<<A<<" A.C.\n";
            }
        }
    }

    return 0;
}
