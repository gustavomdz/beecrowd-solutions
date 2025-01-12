#include <iostream>
 
using namespace std;
 
int main() 
{
 
    int D1,D2,H1,H2,M1,M2,S1,S2,RM1,RM2;
    char A[5];
    cin>>A>>D1>>H1>>A>>M1>>A>>S1;
    cin>>A>>D2>>H2>>A>>M2>>A>>S2;
    RM1=D1*86400+H1*3600+M1*60+S1;
    RM2=D2*86400+H2*3600+M2*60+S2;
    
    D1=(RM2-RM1)/86400;
    H1=((RM2-RM1)%86400)/3600;
    M1=(((RM2-RM1)%86400)%3600)/60;
    S1=(((RM2-RM1)%86400)%3600)%60;
    
    cout<<D1<<" dia(s)\n"<<H1<<" hora(s)\n"<<M1<<" minuto(s)\n"<<S1<<" segundo(s)\n";
    
    
    
    
    
    
    return 0;
}
