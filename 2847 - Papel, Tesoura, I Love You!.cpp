#include <iostream>

using namespace std;

int main()
{
    string S;
    int TAM,I=0,l=0,o=0,v=0,e=0,y=0,u=0,esc=0,pares=0;
    getline(cin,S);
    TAM=S.size();
    for(int i=0;i<TAM;i++)
    {
        if(S[i]=='I')
        {
            I++;
        }
        if(S[i]=='l')
        {
            l++;
        }
        if(S[i]=='o')
        {
            o++;
        }
        if(S[i]=='v')
        {
            v++;
        }
        if(S[i]=='e')
        {
            e++;
        }
        if(S[i]=='y')
        {
            y++;
        }
        if(S[i]=='u')
        {
            u++;
        }
        if(S[i]=='!')
        {
            esc++;
        }
    }
    while(I>0&&l>0&&o>=2&&v>0&&e>0&&y>0&&u>0&&esc>0)
    {
           pares++;
           I--;
           l--;
           o--;
           v--;
           e--;
           y--;
           o--;
           u--;
           esc--;
    }
    cout<<pares<<endl;
    return 0;
}

