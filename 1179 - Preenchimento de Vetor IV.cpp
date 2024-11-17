#include <iostream>

using namespace std;

int main()
{
    int N,par[5],im[5],j=0,k=0;
    while(j<5&&k<5)//primeiro while
    {
        cin>>N;
        if(N%2==0)
        {
            par[j]=N;
            j++;
        }
        else
        {
            im[k]=N;
            k++;
        }
    }
    if(j==5)
    {
        for(int i=0;i<5;i++)
        {
            cout<<"par["<<i<<"] = "<<par[i]<<endl;
        }
        j=0;
    }
    else
    {
        if(k==5)
        {
            for(int i=0;i<5;i++)
            {
                cout<<"impar["<<i<<"] = "<<im[i]<<endl;
            }
            k=0;
        }
    }
    while(j<5&&k<5)//segunda leitura
    {
        cin>>N;
        if(N%2==0)
        {
            par[j]=N;
            j++;
        }
        else
        {
            im[k]=N;
            k++;
        }
    }
    if(j==5)
    {
        for(int i=0;i<5;i++)
        {
            cout<<"par["<<i<<"] = "<<par[i]<<endl;
        }
        j=0;
    }
    else
    {
        if(k==5)
        {
            for(int i=0;i<5;i++)
            {
                cout<<"impar["<<i<<"] = "<<im[i]<<endl;
            }
            k=0;
        }
    }
    while(j<5&&k<5&&j+k!=5)//terceira leitura
    {
        cin>>N;
        if(N%2==0)
        {
            par[j]=N;
            j++;
        }
        else
        {
            im[k]=N;
            k++;
        }
    }
    if(j+k==5)
    {
        for(int i=0;i<k;i++)
        {
            cout<<"impar["<<i<<"] = "<<im[i]<<endl;
        }
        for(int i=0;i<j;i++)
        {
            cout<<"par["<<i<<"] = "<<par[i]<<endl;
        }
    }
    else
    {
        if(j==5)
        {
            for(int i=0;i<5;i++)
            {
                cout<<"par["<<i<<"] = "<<par[i]<<endl;
            }
        }
        else
        {
            if(k==5)
            {
                for(int i=0;i<5;i++)
                {
                    cout<<"impar["<<i<<"] = "<<im[i]<<endl;
                }
            }
        }
    }

    return 0;
}
