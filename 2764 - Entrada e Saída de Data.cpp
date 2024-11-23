#include <iostream>
 
using namespace std;
 
int main() {
 
    int D,M,A;
    char barra;
    cin>>D>>barra>>M>>barra>>A;
    if(D<10&&M<10&&A<10)
    {
    	cout<<"0"<<M<<"/0"<<D<<"/0"<<A<<endl;
    	cout<<"0"<<A<<"/0"<<M<<"/0"<<D<<endl;
    	cout<<"0"<<D<<"-0"<<M<<"-0"<<A<<endl;
    }
    else
    {
    	if(D<10&&M<10&&A>=10)
    	{
    		cout<<"0"<<M<<"/0"<<D<<"/"<<A<<endl;
    		cout<<A<<"/0"<<M<<"/0"<<D<<endl;
    		cout<<"0"<<D<<"-0"<<M<<"-"<<A<<endl;
		}
		else
		{
			if(D<10&&A<10&&M>=10)
			{
				cout<<M<<"/0"<<D<<"/0"<<A<<endl;
    			cout<<"0"<<A<<"/"<<M<<"/0"<<D<<endl;
    			cout<<"0"<<D<<"-"<<M<<"-0"<<A<<endl;
			}
			else
			{
				if(M<10&&A<10&&D>=10)
				{
					cout<<"0"<<M<<"/"<<D<<"/0"<<A<<endl;
    				cout<<"0"<<A<<"/0"<<M<<"/"<<D<<endl;
   					cout<<D<<"-0"<<M<<"-0"<<A<<endl;
				}
				else
				{
					if(D>=10&&M>=10&&A>=10)
					{
						cout<<M<<"/"<<D<<"/"<<A<<endl;
    					cout<<A<<"/"<<M<<"/"<<D<<endl;
    					cout<<D<<"-"<<M<<"-"<<A<<endl;
					}
					else
					{
						if(D>=10&&M>=10&&A<10)
						{
							cout<<M<<"/"<<D<<"/0"<<A<<endl;
    						cout<<"0"<<A<<"/"<<M<<"/"<<D<<endl;
    						cout<<D<<"-"<<M<<"-0"<<A<<endl;
						}
						else
						{
							if(D>=10&&M<10&&A>=10)
							{
								cout<<"0"<<M<<"/"<<D<<"/"<<A<<endl;
    							cout<<A<<"/0"<<M<<"/"<<D<<endl;
    							cout<<D<<"-0"<<M<<"-"<<A<<endl;
							}
							else
							{
								if(D<10&&M>=10&&A>=10)
								{
									cout<<M<<"/0"<<D<<"/"<<A<<endl;
    								cout<<A<<"/"<<M<<"/0"<<D<<endl;
    								cout<<"0"<<D<<"-"<<M<<"-"<<A<<endl;
								}
							}
						}
					}
				}
			}
		}
	}
 
    return 0;
}
