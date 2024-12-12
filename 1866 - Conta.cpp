#include <iostream>
using namespace std;
int main()
{
    int N,cont,N2;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cont=0;
        cin>>N2;
        for(int j=0;j<N2;j++)
        {
            if(cont==1)
            {
                cont=cont-1;
            }
            else
            {
                if(cont==0)
                {
                    cont++;
                }
            }
        }

    cout<<cont<<endl;
    }


    return 0;
}
