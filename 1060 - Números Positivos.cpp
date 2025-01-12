#include <iostream>
 
using namespace std;
 
int main() {
    
    int j=0;
    double N;
    for(int i=0;i<6;i++)
    {
        cin>>N;
        if(N>=0)
        {
            j++;
        }
    }
    cout<<j<<" valores positivos\n";
 
    return 0;
}
