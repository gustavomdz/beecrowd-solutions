#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
 
    int A;
    float B;
    char C;
    char nome[49];
    scanf("%d %f %c %[^\n]",&A,&B,&C, &nome);
    printf("%d%f%c%s\n",A,B,C,nome);
    printf("%d\t%.6f\t%c\t%s\n",A,B,C,nome);
    printf("%10d%10.6f%10c%10s\n",A,B,C,nome);
	
    
    
 
    return 0;
}
