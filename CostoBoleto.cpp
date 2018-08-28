#include <iostream>

using namespace std;

int main ()
{
	float distancia;
	int estancia;
	
	cout << "\n\tIngresa la distancia a recorrer: ";
	cin >> distancia;
	
	cout << "\n\tIngresa los dias de estancia del viaje: ";
	cin >> estancia;
	cout << "\n\t-------------------------------------------" << endl;
	
	distancia*=2;
	
	if (distancia > 800 && estancia > 7)
	{
		distancia*=0.17*0.7;
		cout << "\n\tEl precio del boleto menos el 30% de descuento es de: " << distancia << endl;
	}
	else
	{
		distancia*=0.17;
		cout << "\n\tEl costo normal del boleto es de: " << distancia << endl;
	}
	
	
	return 0;
}
