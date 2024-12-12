#include <iostream>

using namespace std;

int main()
{
    int T,B,DAi,DDi,DLi,GAi,GDi,GLi,D,G;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>B>>DAi>>DDi>>DLi>>GAi>>GDi>>GLi;
        if(DLi%2==0)
        {
            D=(DAi+DDi)/2+B;
        }
        else
        {
            D=(DAi+DDi)/2;
        }
        if(GLi%2==0)
        {
            G=(GAi+GDi)/2+B;
        }
        else
        {
            G=(GAi+GDi)/2;
        }
        if(G>D)
        {
            cout<<"Guarte\n";
        }
        else
        {
            if(D>G)
            {
                cout<<"Dabriel\n";
            }
            else
            {
                cout<<"Empate\n";
            }
        }
    }



    return 0;
}
