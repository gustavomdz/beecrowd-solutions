#include <iostream>

using namespace std;

int main()
{
    int N,i,j,M[100][100],C,k,l,n;
    cin>>N;
    n=N;
    while(N!=0)
    {
        C=1;
        k=0;
        i=0;
        j=0;
        l=0;
        while(k<N*N)
        {
            for(;j<n;j++)
            {
                M[i][j]=C;
                k++;
                C++;
            }
            C-=2;
            j--;
            for(i++;i<n;i++)
            {
                M[i][j]=C;
                k++;
                C--;
            }
            C+=2;
            i--;
            j--;
            for(;j>=l;j--)
            {
                M[i][j]=C;
                k++;
                C++;
            }
            C-=2;
            j++;
            i--;
            for(;i>l;i--)
            {
                M[i][j]=C;
                k++;
                C--;
            }
            i++;
            j++;
            C=1;
            n--;
            l++;
        }
        for(int k=0;k<N;k++)
        {
            for(int l=0;l<N;l++)
            {
                if(l==0)
                {
                    if(M[k][l]==100)
                    {
                        cout<<M[k][l];
                    }
                    else
                    {
                        if(M[k][l]>=10)
                        {
                            cout<<" "<<M[k][l];
                        }
                        else
                        {
                            cout<<"  "<<M[k][l];
                        }
                    }
                }
                else
                {
                    if(M[k][l]==100)
                    {
                        cout<<" "<<M[k][l];
                    }
                    else
                    {
                        if(M[k][l]>=10)
                        {
                            cout<<"  "<<M[k][l];
                        }
                        else
                        {
                            cout<<"   "<<M[k][l];
                        }
                    }
                }
            }
            cout<<endl;
        }
        cout<<endl;
        cin>>N;
        n=N;
    }

    return 0;
}
