#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float S=0;
    for(int i=2;i<=100;i++)
    {
        S=S+1/(float)i;
    }

    cout<<fixed<<setprecision(2)<<S+1<<endl;


    return 0;
}
