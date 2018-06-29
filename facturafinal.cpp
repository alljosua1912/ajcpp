#include <iostream>
using namespace std;
 
int main()

{
   char esexenta;

		
	float subtotal;
	int descuento;
	float impuesto;
	float calculodescuento;
	float calculoimpuesto;
	float total;
	
	{
		cout<<"ingrese el subtotal"<<endl;
		cin>>subtotal;
			
			cout<<"ingrese el descuento"<<endl;
			cin>>descuento;
			
			 cout << "es factura exenta: ";
    char esexenta = 's';
    cin >> esexenta;

    switch(esexenta)
    {
        case 's': cout << "la factura es exenta\n";
        calculoimpuesto=0;
        break;
        case 'n': cout << "La factura no es exenta\n";
        calculoimpuesto=subtotal*0.15;
        cout<<"isv\n"<<calculoimpuesto<<endl;
        break;
    
		
	}
	
	calculodescuento=(subtotal*descuento)/100;
	total=(subtotal-descuento+calculoimpuesto);
	cout<<"el total a pagar es\n"<<total<<endl;
}
}
