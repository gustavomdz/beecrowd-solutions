#include <iostream>

using namespace std;

int main() {

	char a;
	bool b=false;
    while((a=getchar())!=EOF)
    {
    	if(a=='j'||a=='p'||a=='s'||a=='v'||a=='b'||a=='x'||a=='z'||a=='f')
    	{
    		if(b!=true)
    		{
    			b=true;
    			cout<<'f';
    		}
		}
		else
		{
			if(a=='J'||a=='P'||a=='S'||a=='V'||a=='B'||a=='X'||a=='Z'||a=='F')
			{
				if(b!=true)
				{
					b=true;
				    cout<<'F';
				}
			}
			else
			{
				b=false;
				cout<<a;
			}
		}
	}

    return 0;
}
