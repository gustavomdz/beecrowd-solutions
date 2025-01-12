#include <iostream>

using namespace std;

int main()
{
	int i;
    string A;
    getline(cin,A);
    for(i=0;A[i]!=',';i++)
    {
    }
    A[i]='\n';
    cout<<A<<"\n";
    
    return 0;
}
