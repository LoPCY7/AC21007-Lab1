#include <iostream> // library that contains basic input output functions

using namespace std;

int factorialRecursive(int n);
int factorialIterative(int n);
int exponensialRecursive(int base, int exponent);
int exponensialIterative(int base, int exponent);
int gcdRecursive(int n1, int n2);
int gcdIterative(int n1, int n2);
void oddRecursive(int range);
void oddIterative(int range);


int main()
{
	int n,n2;

	cout << "Enter a positive integer: ";
	cin >> n;

	//cout << "Odd range of " << n <<  " = " << factorialIterative(n) << endl;
	oddRecursive(n);

	return 0;
}

int factorialRecursive(int n)
{
	if (n > 1)
		return n * factorialRecursive(n - 1);
	else
		return 1;
}

int factorialIterative(int n)
{
	int factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}

int exponensialRecursive(int base, int exponent)
{
	if (exponent == 0)
		return 1;
	else
		return base * exponensialRecursive(base, exponent - 1);
}

int exponensialIterative(int base, int exponent)
{
	int result = base;
	for (int i = 1; i < exponent; i++)
	{
		result *=base;
	}
	return result;
}

int gcdRecursive(int n1, int n2)
{
	if (n2 != 0)
		return gcdRecursive(n2, n1 % n2);
	else
		return n1;
}

int gcdIterative(int n1, int n2)
{
	int gcd = 0;
	for (int i = 1; i <= n1; i++)
	{
		if (n1%i == 0 && n2%i == 0)
			gcd = i;
	}
	return gcd;
}

void oddRecursive(int range)
{
	if (range >= 0)
	{
		if (range % 2 != 0)
		{
			cout << range << " ";
		}
		oddRecursive(range - 1);
	}
}

void oddIterative(int range)
{
	for (int i = 0; i <= range; i++)
	{
		if (i % 2 != 0)
			cout << i << " ";
	}
}

int sumRecursive()
{
	return 0;
}

int sumIterative(int n)
{
	for (int i = 1; i < n; i++)
	{

	}
	return 0;
}