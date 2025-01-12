#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N,X,Y;
    double div;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>X>>Y;
        if(Y==0)
        {
            cout<<"divisao impossivel\n";
        }
        else
        {
            div=(float)X/Y;
            cout<<fixed<<setprecision(1)<<div<<endl;
        }
    }

    return 0;
}

