#include <iostream>

using namespace std;

int main() {

    string PG;
    int soma, qtdgrito;
    qtdgrito=1;
    soma=0;
    while(qtdgrito<4)
    {
        //cin>>PG;
        getline (cin,PG);
        while(PG!="caw caw")
        {
            for(int i=0;i<3;i++)
            {
                if(PG[i]=='*' && i==0)
                {
                    soma+=4;
                }
                if(PG[i]=='*' && i==1)
                {
                    soma+=2;
                }
                if(PG[i]=='*' && i==2)
                {
                    soma+=1;
                }
            }
            //cin>>PG;
            getline (cin,PG);
        }
		qtdgrito++;
        cout<<soma<<endl;
        soma=0;
    }
    
    return 0;
}
