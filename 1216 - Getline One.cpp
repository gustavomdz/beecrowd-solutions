#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string nome;
    int D,soma=0,i=0,j;
    double media;
    while(scanf("%d", &nome)!=EOF)
    {
    	cin.ignore();
    	getline(cin,nome);
    	cin>>D;
    	soma=soma+D;
    	i++;
	}
	media=(float)soma/i;
	cout<<fixed<<setprecision(1)<<media<<endl;

    return 0;
}
