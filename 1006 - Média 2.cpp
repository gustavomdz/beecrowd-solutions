#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float A,B,C;
    cin>>A>>B>>C;
    A=(A*2+B*3+C*5)/10;
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<A<<"\n";
 
    return 0;
}
