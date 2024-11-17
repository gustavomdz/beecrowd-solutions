#include <iostream>

using namespace std;

int main()
{
   int N,k,i;
   cin>>N;
   int X[N-1];
   for(i=0;i<N-1;i++)
   {
       cin>>X[i];
   }
   for(i=0,k=N;i<N&&k>0;)
   {
       if(k==X[i])
       {
           k--;
           i=0;
       }
       else
       {
           i++;
       }
   }
   cout<<k<<endl;

    return 0;
}
