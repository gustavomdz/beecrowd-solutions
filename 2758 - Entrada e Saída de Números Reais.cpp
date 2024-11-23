#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a,b;
    double c,d;
    cin>>a>>b>>c>>d;
    cout<<fixed<<setprecision(6)<<"A = "<<a<<", B = "<<b<<endl<<"C = "<<c<<", D = "<<d<<endl;
    cout<<fixed<<setprecision(1)<<"A = "<<a<<", B = "<<b<<endl<<"C = "<<c<<", D = "<<d<<endl;
    cout<<fixed<<setprecision(2)<<"A = "<<a<<", B = "<<b<<endl<<"C = "<<c<<", D = "<<d<<endl;
    cout<<fixed<<setprecision(3)<<"A = "<<a<<", B = "<<b<<endl<<"C = "<<c<<", D = "<<d<<endl;
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n",a,b,c,d);
    cout<<fixed<<setprecision(0)<<"A = "<<a<<", B = "<<b<<endl<<"C = "<<c<<", D = "<<d<<endl;
    return 0;
}

