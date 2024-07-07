#include <iostream>
#include <stack>

using namespace std;

int main() {

    int N,CN,T;
    stack <int> E;
    cin>>N;
    while(N)
    {
        int C[N];
        cin>>C[0];
        while(C[0])
        {
            CN=1;
            for(int i=1;i<N;i++)
                cin>>C[i];
            int i=0;
            while(CN<N)
            {
                if(E.empty()&&E.size()<=N)
                    E.push(CN);
                while(!E.empty()&&E.top()!=C[i]&&CN<N)
                {
                    if(CN<N)
                        CN++;
                    if(E.size()<=N)
                        E.push(CN);
                }
                while(!E.empty()&&E.top()==C[i])
                {
                    E.pop();
                    if(i<N)
                        i++;
                    if(E.empty()&&CN<N)
                        CN++;
                }
            }
            if(E.empty())
                cout<<"Yes\n";
            else
                cout<<"No\n";
            T=E.size();
            for(int j=0;j<T;j++)
                E.pop();
            cin>>C[0];
            if(!C[0])
                cout<<endl;
        }
        cin>>N;
    }

    return 0;
}
