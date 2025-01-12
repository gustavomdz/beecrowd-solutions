#include <iostream>
#include <iomanip>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    double A,B;
    char A2[2];
	char B2[2];
    A=234.345;
    B=45.698;
    cout<<fixed<<setprecision(6)<<A<<" - "<<B<<"\n";
    cout<<fixed<<setprecision(0)<<A<<" - "<<B<<"\n";
    cout<<fixed<<setprecision(1)<<A<<" - "<<B<<"\n";
    cout<<fixed<<setprecision(2)<<A<<" - "<<B<<"\n";
    cout<<fixed<<setprecision(3)<<A<<" - "<<B<<"\n";
    sprintf(A2, "%", A);
    sprintf(B2, "%", B);
    printf("%.6e - ",A);
    printf("%.6e\n",B);
    printf("%.6E - ",A);
    printf("%.6E\n",B);
    cout<<A<<" - "<<B<<"\n";
    cout<<A<<" - "<<B<<"\n";
 
    return 0;
}
