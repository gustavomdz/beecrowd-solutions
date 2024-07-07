#include <iostream>

using namespace std;

int main(){

    string hora;
    int h, mi, m, ho;
    bool h1,h2,h3,h4,m1,m2,m3,m4,m5,m6;
    while(cin>>hora)
    {
        h1=h2=h3=h4=m1=m2=m3=m4=m5=m6=false;
        ho=hora[0]-48;
        h=hora[1]-48;
        ho=ho*10+h;
        mi=hora[3]-48;
        m=hora[4]-48;
        mi=mi*10+m;
        cout<<" ____________________________________________"<<endl;
        cout<<"|                                            |"<<endl;
        cout<<"|    ____________________________________    |_"<<endl;
        cout<<"|   |                                    |   |_)"<<endl;
        cout<<"|   |   8         4         2         1  |   |"<<endl;
        cout<<"|   |                                    |   |"<<endl;
        for(int k=0;k<4;k++)
        {
            if(ho%2==1&&k==0)
            {
                h4=true;
            }
            if(ho%2==1&&k==1)
            {
                h3=true;
            }
            if(ho%2==1&&k==2)
            {
                h2=true;
            }
            if(ho%2==1&&k==3)
            {
                h1=true;
            }
            ho/=2;
        }
        for(int k=0;k<6;k++)
        {
            if(mi%2==1&&k==0)
            {
                m6=true;
            }
            if(mi%2==1&&k==1)
            {
                m5=true;
            }
            if(mi%2==1&&k==2)
            {
                m4=true;
            }
            if(mi%2==1&&k==3)
            {
                m3=true;
            }
            if(mi%2==1&&k==4)
            {
                m2=true;
            }
            if(mi%2==1&&k==5)
            {
                m1=true;
            }
            mi/=2;
        }
        if(h1)
        {
            ho=ho-8;
            cout<<"|   |   o";
        }
        else
        {
            cout<<"|   |    ";
        }

        if(h2)
        {
            ho=ho-4;

            cout<<"         o";
        }
        else
        {
            cout<<"          ";
        }

        if(h3)
        {
            ho=ho-2;

            cout<<"         o";
        }
        else
        {
            cout<<"          ";
        }
        if(h4)
        {
            ho=ho-1;

            cout<<"         o  |   |"<<endl;
        }
        else
        {
            cout<<"            |   |"<<endl;
        }
        cout<<"|   |                                    |   |"<<endl;
        cout<<"|   |                                    |   |"<<endl;
        if(m1)
        {
            mi=mi-32;

            cout<<"|   |   o";

        }
        else
        {
            cout<<"|   |    ";
        }

        if(m2)
        {
            mi=mi-16;

            cout<<"     o";
        }
        else
        {
            cout<<"      ";
        }

        if(m3)
        {
            mi=mi-8;

            cout<<"     o";
        }
        else
        {
            cout<<"      ";
        }

        if(m4)
        {
            mi=mi-4;

            cout<<"     o";
        }
        else
        {
            cout<<"      ";
        }

        if(m5)
        {
            mi=mi-2;

            cout<<"     o";
        }
        else
        {
            cout<<"      ";
        }

        if(m6)
        {
            mi=mi-1;

            cout<<"     o  |   |"<<endl;
        }
        else
        {
            cout<<"        |   |"<<endl;
        }
        cout<<"|   |                                    |   |"<<endl;
        cout<<"|   |   32    16    8     4     2     1  |   |_"<<endl;
        cout<<"|   |____________________________________|   |_)"<<endl;
        cout<<"|                                            |"<<endl;
        cout<<"|____________________________________________|"<<endl;
        cout<<endl;


    }
    return 0;
}
