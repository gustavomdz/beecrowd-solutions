#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    float S=0;
    for(int i=1,j=1;i<=39;i+=2,j*=2)
    {
        S+=i/j;
    }
    cout<<fixed<<setprecision(2)<<S*2<<endl;
 
    return 0;
}
