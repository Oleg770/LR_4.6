// Лабораторна робота № 4.6
// < Калька Олег >
// Варіант 4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int j, i;

	P = 1;
	j = 1;
	while (j <= 15)
	{
		S = 0;
		i = j;
		while (i <= j)
		{
			S += sqrt((1. * i) * (1. * i));
			i++;
		}P *= S;
		j++;
	}
	cout << P << endl;

	P = 1;
	j = 1;
	do {
		S = 0;
		i = j;
		do {
			S += sqrt((1. * i) * (1. * i));
			i++;
		} while (i <= j);
		P *= S;
		j++;
	} while (j <= 15);
	cout << P << endl;
	P = 1;
	for (j = 1; j <= 15; j++)
	{
		S = 0;
		for (i = j; i <= j; i++)
		{
			S += sqrt((1. * i) * (1. * i));
		}
		P *= S;
	}
	cout << P << endl;

	P = 1;
	for (j = 15; j >= 1; j--)
	{
		S = 0;
		for (i = j; i >= j; i--)
		{
			S += sqrt((1. * i) * (1. * i));
		}
		P *= S;
	}
	cout << P << endl;

	return 0;

}
