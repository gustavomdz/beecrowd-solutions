#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    int n,h;
    double s;
    cin>>n>>h>>s;
    s=h*s;
    cout <<"NUMBER = "<<n<<"\n";
    cout <<fixed <<setprecision(2)<<"SALARY = U$ "<<s<<"\n";
    
    return 0;
}
