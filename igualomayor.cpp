#include<iostream>
#include<cstdlib>
using namespace std;
int main (int argc, char* argv[])
{
	if (argc < 3)
	{
		cout<<"Ingrese tres valores enteros";
		return 1;
	}
	cout<<"\n Determine si son iguales o mayor :\n";
	cout<<"------------- \n";
	
	int a, b, c;
	
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	
	if (a==b&&a>c,b>c)
	{
		cout<<"a y b son iguales y mayores que c:"<<a,c;
	}
	if (a==c&&a>b,c>b)
	{
		cout<<"a y c son iguales y mayores que b:"<<a,b;
	}
	if (b==c&&b>a,c>a)
	{
		cout<<"b y c son iguales y mayores que a:"<<b,a;
	}
	if (a==b&&b==c)
	{
		cout<<"a b y c son iguales:"<<a,b,c;
	}
}
