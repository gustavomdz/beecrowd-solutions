#include <iostream>
using namespace std;

int main()
{
    int i=0,H,M,O,T;
    cin>>T;
    while(i<T)
    {
        cin>>H>>M>>O;
        i++;
        if(H<10)
        {
            printf("0%d:",H);
        }
        else
        {
            printf("%d:",H);
        }
        if(M<10)
        {
        	printf("0%d",M);
		}
		else
		{
			printf("%d",M);
		}
		if(O==0)
		{
			printf(" - A porta fechou!\n");
		}
		else
		{
			printf(" - A porta abriu!\n");
		}
		
    }
}

