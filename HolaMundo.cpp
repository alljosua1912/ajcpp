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
	cout<<"\n Determine el mayor de tres numeros :\n";
	cout<<"------------- \n";
	
	int a, b, c;
	
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	
	if (a>b)
	{
		cout<<"el numero mayor es a:"<<a;
	}

}
