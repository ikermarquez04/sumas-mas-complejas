#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	int suma = 0, elevacion = 0, n;

	cout << "digite el numero de elementos a sumar: ";
	cin >> n;

	for (int i = 1;i <= n;i++)
	{
		elevacion = pow(1, i);
		suma += elevacion;
	}

	cout << "\nLa suma total es: " << suma << endl;

	system("pause");
	return 0;

}

