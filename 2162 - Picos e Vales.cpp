#include <iostream>

using namespace std;

int main() {

    int N,j=0,k=0;
    cin>>N;
    int H[N];
    for(int i=0;i<N;i++)
    {
        cin>>H[i];
    }
    for(int i=1;i<N;i++)
    {
        if(H[i]==H[i-1])
        {
            k++;
        }
    }
    if(H[0]<H[1])
    {//começa com vale
        for(int i=1;i<N;i++)
        {// i impares maior que os i pares
            if(H[i]>H[i-1]&&i%2!=0)
            {
                j++;
            }
            else
            {
                if(H[i]<H[i-1]&&i%2==0)
                {
                    j++;
                }
            }
        }
    }
    else
    {
        if(H[0]>H[1])
        {//começa com pico
            for(int i=1;i<N;i++)
            {//i impares menor que os i pares
                if(H[i]<H[i-1]&&i%2!=0)
                {
                    j++;
                }
                else
                {
                    if(H[i]>H[i-1]&&i%2==0)
                    {
                        j++;
                    }
                }
            }
        }
    }
    if(j==N-1&&k==0)
    {
        cout<<"1\n";
    }
    else
    {
        cout<<"0\n";
    }

    return 0;
}
