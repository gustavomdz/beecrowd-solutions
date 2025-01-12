#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double X,Y,M;
    cin>>X;
    while(X<0||X>10)
    {
        cout<<"nota invalida\n";
        cin>>X;
    }
    cin>>Y;
    while(Y<0||Y>10)
    {
        cout<<"nota invalida\n";
        cin>>Y;
    }
    M=(X+Y)/2;
    cout<<fixed<<setprecision(2)<<"media = "<<M<<endl;


    return 0;
}

