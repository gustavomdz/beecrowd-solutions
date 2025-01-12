#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float A,B;
    cin>>A>>B;
    A=(A*3.5+B*7.5)/11;
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<A<<"\n";
 
    return 0;
}
