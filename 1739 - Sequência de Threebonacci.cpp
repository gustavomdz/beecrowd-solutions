#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int QD,QD1,X1,X2,X,Y,Tree,D,div,aux;
    int N;
    while(cin>>N)
    {
        X1=1;
        X2=0;
        for(int i=0;i<N;)
        {
            QD=0;
            QD1=0;
            div=1;
            X=X1+X2;
            X2=X1;
            X1=X;
            if(X%3==0)
            {
                Y=X;
                i++;
            }
            else
            {
                D=X;
                while(D!=0)
                {
                	QD++;
                    D=D/10;
                }
                D=X;
                while(QD1!=1)
                {
                    QD1=pow(10,QD);
                    Tree=D/QD1;
                    div=Tree;
                    aux=D%QD1;
                    QD--;
                    D=aux;
                    if(div==3)
                    {
                        Y=X;
                        i++;
                        QD1=1;
                    }
                }
            }
        }
        cout<<Y<<endl;
    }
    return 0;
}
