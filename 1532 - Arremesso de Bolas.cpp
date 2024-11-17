#include <iostream>

using namespace std;

int main()
{
    int N,cont,i,v;
    cin>>N>>v;
    while(N!=0&&v!=0)
    {
        int flag = 0;
        N++;
        for(int V = v; V >= 1; V--){
            cont=-1;
            i = 0;
            int VV = V;
            while(i < N-1 && VV)
            {

                cont++;
                if(cont==VV){
                    VV--;
                    cont=0;
                }
                if(i==N-1){
                    break;
                }
                i += VV;
            }

            if(i==N-1)
            {
                flag=1;
                cout<<"possivel\n";
                break;
            }
        }

        if(flag == 0)cout<<"impossivel\n";

        cin>>N>>v;
    }
    return 0;
}
