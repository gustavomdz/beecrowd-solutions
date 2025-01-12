#include <stdio.h>

int main ()
{
    long double N;
    char numero[130];

    //ler
    scanf("%Lf", &N);
    sprintf(numero, "%Lf", N);
    if(numero[0]=='-')
    {
        printf("%.4LE\n",N);

    }
    else
    {
        printf("+%.4LE\n",N);
    }









}

