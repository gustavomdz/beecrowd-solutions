#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int N;
    double Fib;
    cin>>N;
    Fib=(pow(((1+sqrt(5))/2),N)-pow(((1-sqrt(5))/2),N))/sqrt(5);
    cout<<fixed<<setprecision(1)<<Fib<<"\n";
    
    return 0;
}
