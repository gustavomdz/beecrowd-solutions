#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B,C;
    cin>>A>>B>>C;
    if(A==B&&A>C)
    {
        cout<<C<<"\n"<<A<<"\n"<<B<<"\n";
    }
    else
    {
        if(A==B&&A<C)
        {
            cout<<A<<"\n"<<B<<"\n"<<C<<"\n";
        }
        else
        {
            if(A==C&&A<B)
            {
                cout<<C<<"\n"<<A<<"\n"<<B<<"\n";
            }
            else
            {
                if(A==C&&A>B)
                {
                    cout<<B<<"\n"<<A<<"\n"<<C<<"\n";
                }
                else
                {
                    if(B==C&&B>A)
                    {
                        cout<<A<<"\n"<<C<<"\n"<<B<<"\n";
                    }
                    else
                    {
                        if(B==C&&B<A)
                        {
                            cout<<C<<"\n"<<B<<"\n"<<A<<"\n";
                        }
                        else
                        {
                            if(A>B&&B>C)
                            {
                                cout<<C<<"\n"<<B<<"\n"<<A<<"\n";
                            }
                            else
                            {
                                if(A>B&&C>B&&A>C)
                                {
                                    cout<<B<<"\n"<<C<<"\n"<<A<<"\n";
                                }
                                else
                                {
                                    if(B>A&&A>C)
                                    {
                                        cout<<C<<"\n"<<A<<"\n"<<B<<"\n";
                                    }
                                    else
                                    {
                                        if(B>A&&A<C&&B>C)
                                        {
                                            cout<<A<<"\n"<<C<<"\n"<<B<<"\n";
                                        }
                                        else
                                        {
                                            if(C>A&&A>B)
                                            {
                                                cout<<B<<"\n"<<A<<"\n"<<C<<"\n";
                                            }
                                            else
                                            {
                                                if(C>A&&A<B&&C>B)
                                                {
                                                    cout<<A<<"\n"<<B<<"\n"<<C<<"\n";
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"\n"<<A<<"\n"<<B<<"\n"<<C<<"\n";
    
    return 0;
}
