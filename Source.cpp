#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
	double D;
	D = 1;
	i = 1;
	while (i <= 15)
	{
		D *= (sin(i) * sin(i) + cos(1/i) * cos(1 / i)) / pow(i, 2);
		cout << "i = " << i << "   " << "D = " << D << endl;
		i++;
	}
	cout << "D = " << D << endl;

	D = 1;
	i = 1;
	do 
	{
		D *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / pow(i, 2);
		i++;
	} while (i <= 15);
	cout << "D = " << D << endl;

	D = 1;
	for ( i = 1; i <= 15; i++ )
	{
		D *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / pow(i, 2);
	}
	cout << "D = " << D << endl;

	D = 1;
	for (i = 15; i >= 1; i--)
	{
		D *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / pow(i, 2);
	}
	cout << "D = " << D << endl;


	return 0;
}