#include <iostream>
using namespace std;

int main ()
{
	int num1, num2;
	
	cout << "\n\tIngresa el primer numero: ";
	cin >> num1;
	cout << "\n\tIngresa el segundo numero: ";
	cin >> num2;
	
	if (num1 % num2 == 0)
	{
		cout << "\n\tEl numero " << num1 << " es multiplo de " << num2 << endl;
	}
	else
	{
		cout << "\n\tEl numero " << num1 << " no es multiplo de " << num2 << endl;
	}
	
	return 0;
}
