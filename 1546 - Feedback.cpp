#include <iostream>

using namespace std;

int main()
{
    int N,K,feed;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>K;
        for(int j=0;j<K;j++)
        {
            cin>>feed;
            if(feed==1)
            {
                cout<<"Rolien\n";
            }
            else
            {
                if(feed==2)
                {
                    cout<<"Naej\n";
                }
                else
                {
                    if(feed==3)
                    {
                        cout<<"Elehcim\n";
                    }
                    else
                    {
                        if(feed==4)
                        {
                            cout<<"Odranoel\n";
                        }
                    }
                }
            }
        }
    }

    return 0;
}
