#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float N1,N2,N3,N4,MEDIA,NE=-1;
    cin>>N1>>N2>>N3>>N4;
    MEDIA=(N1*2+N2*3+N3*4+N4*1)/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<MEDIA<<"\n";
    if(MEDIA>=7.0)
    {
        cout<<"Aluno aprovado.\n";
    }
    else
    {
        if(MEDIA<5.0)
        {
            cout<<"Aluno reprovado.\n";
        }
        else
        {
            if(MEDIA>=5.0&&MEDIA<=6.9)
            {
                cout<<"Aluno em exame.\n";
                cin>>NE;
                cout<<"Nota do exame: "<<NE<<"\n";
            }
        }
    }
    if((NE+MEDIA)/2>=5.0)
    {
        cout<<"Aluno aprovado.\n";
        cout<<fixed<<setprecision(1)<<"Media final: "<<(NE+MEDIA)/2<<"\n";
    }
    else
    {
        if(NE!=-1)
        {
            cout<<"Aluno reprovado.\n";
            cout<<fixed<<setprecision(1)<<"Media final: "<<(NE+MEDIA)/2<<"\n";
        }
    }
 
    return 0;
}
