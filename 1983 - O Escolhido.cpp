#include <iostream>

using namespace std;

int main() {

    int M,MM,f,j=0;
    double N,NM;
    cin>>f;
    for(int i=0;i<f;i++)
    {
        cin>>M>>N;
        if(N>=8)
        {
            if(N>NM)
            {
                NM=N;
                MM=M;
            }
        }
        else
        {
            j++;
        }
    }
    if(j==f)
    {
        cout<<"Minimum note not reached\n";
    }
    else
    {
        cout<<MM<<"\n";
    }

    return 0;
}

