    #include <iostream>

    using namespace std;

    int passada(int M, int N);

    int main()
    {//usando funçao
        int M,N;
        cin>>M>>N;
        cout<<passada(M,N)<<endl;
    }
    int passada(int M, int N)
    {
        int F[M][N],j=0,i=0,soma=0,maior=0;
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>F[i][j];
            }
        }
        while(j<N)
        {
            for(i=0;i<M;i++)
            {
                soma+=F[i][j];
            }
            if(soma>maior)
            {
                maior=soma;
            }
            j++;
            soma=0;
        }
        i=0;
        j=0;
        while(i<M)
        {
            for(j=0;j<N;j++)
            {
                soma+=F[i][j];
            }
            if(soma>maior)
            {
                maior=soma;
            }
            i++;
            soma=0;
        }

        return maior;
    }
