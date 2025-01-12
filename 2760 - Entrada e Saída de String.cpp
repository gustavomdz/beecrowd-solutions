#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char A[101];
	char B[101];
	char C[101];
    scanf(" %[^\n]s", A);
    scanf(" %[^\n]s", B);
    scanf(" %[^\n]s", C);
    printf("%s%s%s\n", A, B, C);
    printf("%s%s%s\n", B, C, A);
    printf("%s%s%s\n", C, A, B);
    printf("%.10s%.10s%.10s\n", A, B, C);
    
    
    return 0;
}
