#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N,X1,X2,T=1;
    char par[11],impar[11];
    scanf("%d",&N);
    while(N!=0)
    {
        scanf("%s",par);
        scanf("%s",impar);
        printf("Teste %d\n",T);
        T++;
        for(int i=0;i<N;i++)
        {
            scanf("%d%d",&X1,&X2);
            if((X1+X2)%2==0)
            {
                printf("%s\n",par);
            }
            else
            {
                printf("%s\n",impar);
            }
        }
        scanf("%d",&N);
        cout<<endl;
    }

    return 0;
}
