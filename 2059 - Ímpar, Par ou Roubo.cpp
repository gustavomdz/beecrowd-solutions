#include <iostream>

using namespace std;

int vencedor(int p, int j1,int j2, int r, int a)
{
    int s=j1+j2;
    if(r==1&&a==1)
    {
        return 2;
    }
    else
    {
        if(r==1&&a==0)
        {
            return 1;
        }
        else
        {
            if(p==1&&s%2==0)
            {
                return 1;
            }
            else
            {
                if(p==1&&s%2!=0)
                {
                    return 2;
                }
                else
                {
                    if(p==0&&s%2!=0)
                    {
                        return 1;
                    }
                    else
                    {
                        if(p==0&&s%2==0)
                        {
                            return 2;
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    int p,j1,j2,r,a;
    cin>>p>>j1>>j2>>r>>a;
    cout<<"Jogador "<<vencedor(p,j1,j2,r,a)<<" ganha!"<<endl;

    return 0;
}
