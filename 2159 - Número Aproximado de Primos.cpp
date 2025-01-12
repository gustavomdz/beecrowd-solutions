#include <stdio.h>
#include <cmath>

int main()
{
    double N,P,M;
    scanf("%lf",&N);
    P=N/log(N);
    M=(1.25506)*(N/log(N));
    printf("%.1lf %.1lf\n",P,M);
    
    return 0;
}
