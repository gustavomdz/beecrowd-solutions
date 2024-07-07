#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin>>A>>B;
    while(A!=0||B!=0)
    {
        cout<<A-B+A<<endl;
        cin>>A>>B;
    }

    return 0;
}
