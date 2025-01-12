#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,A,M,D;
    cin>>X;
    A=X/365;
    M=(X%365)/30;
    D=(X%365)%30;
    cout<<A<<" ano(s)\n"<<M<<" mes(es)\n"<<D<<" dia(s)\n";
 
    return 0;
}
