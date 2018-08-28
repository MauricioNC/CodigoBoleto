#include <iostream>
using namespace std;

int main ()
{
	int num1;
	
	
	cout << "\n\tIngresa un numero de 5 digitos: ";
	cin >> num1 ;
	
	if (num1 >= 10000)
	{
		cout << "\n\t" << num1 / 10000 << "   " << num1 % 10000 / 1000 << "   " << num1 % 1000 / 100 << "   " << num1 % 100 / 10 << "   " << num1 % 10 << endl;
	}
	else
	{
		cout << "\n\tIngresa solamente numeros de 5 cifras";
	}
	
	return 0;
}
