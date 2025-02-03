#include <stdio.h>
#include <iostream>

using namespace std;
 
int main() {
 
    string nome;
    int C,N;
    cin>>C;
    for(int i=0;i<C;i++)
    {
        cin>>nome>>N;
        if(nome=="Thor")
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
 
    return 0;
}
