#include <iostream>

using namespace std;

int main() {

    char A[7];
    char B[7];
    int f;
    cin>>f;
    for(int i=0;i<f;i++)
    {
    cin>>A>>B;
        if(A[0]=='t'&&B[2]=='p'||A[2]=='p'&&B[2]=='d'||A[2]=='d'&&B[0]=='l'||A[0]=='l'&&B[0]=='S'||A[0]=='S'&&B[0]=='t'||A[0]=='t'&&B[0]=='l'||A[0]=='l'&&B[2]=='p'||A[2]=='p'&&B[0]=='S'||A[0]=='S'&&B[2]=='d'||A[2]=='d'&&B[0]=='t')
        {
            cout<<"Caso #"<<i+1<<": Bazinga!\n";
        }
        else
        {
            if(B[0]=='t'&&A[2]=='p'||B[2]=='p'&&A[2]=='d'||B[2]=='d'&&A[0]=='l'||B[0]=='l'&&A[0]=='S'||B[0]=='S'&&A[0]=='t'||B[0]=='t'&&A[0]=='l'||B[0]=='l'&&A[2]=='p'||B[2]=='p'&&A[0]=='S'||B[0]=='S'&&A[2]=='d'||B[2]=='d'&&A[0]=='t')
            {
                cout<<"Caso #"<<i+1<<": Raj trapaceou!\n";
            }
            else
            {
                if(A[0]==B[0]&&A[1]==B[1])
                {
                    cout<<"Caso #"<<i+1<<": De novo!\n";
                }
            }
        }
    }

    return 0;
}

