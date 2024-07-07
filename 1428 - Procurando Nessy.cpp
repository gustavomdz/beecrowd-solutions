#include <iostream>

using namespace std;

int main()
{
    int t,m,n,cont=0,cont2;
    cin>>t;
    while(cont<t)
    {
        cin >> m >> n;
        n=n/3;
        m=m/3;

        cout << n*m << endl;
        cont++;
    }

    return 0;
}
