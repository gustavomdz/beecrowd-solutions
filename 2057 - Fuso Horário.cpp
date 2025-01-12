#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
int main() {
 
    int A,B,C,D;
    cin>>A>>B>>C;
    D=A+B+C;
    if(D>24||D<0)
    {
        D=abs(24-abs(D));
    }
    cout<<D<<"\n";
 
    return 0;
}
