#include <iostream>

using namespace std;

int main() {

    int X,Y;
    cin>>X>>Y;
    if(X<Y)
    {
        for(X=X+1;X<Y;X++)
        {
            if(X%5==2||X%5==3)
            {
                cout<<X<<endl;
            }
        }
    }
    else
    {
        if(X>Y)
        {
            for(Y=Y+1;Y<X;Y++)
            {
                if(Y%5==2||Y%5==3)
                {
                    cout<<Y<<endl;
                }
            }
        }
    }


    return 0;
}

