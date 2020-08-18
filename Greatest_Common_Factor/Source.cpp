#include<iostream>
using namespace std;

int main()
{
	int x, y, i;
	cout << "Enter first number: ";
	cin >> x;
	cout << endl;
	cout << "Enter second number: ";
	cin >> y;
	cout << endl;
	if (x < y)
	{
		i = x;
		LOOP:
		if ((y % i == 0)&&(x % i == 0))
		{
			cout << "Greatest common divisor: " << i << endl;
		}
		else
		{
			i--;
			goto LOOP;
		}
	}
	if (y < x)
	{
		i = y;
	LOOP1:
		if ((x % i == 0) && (y % i == 0))
		{
			cout << "Greatest common divisor: " << i << endl;
		}
		else
		{
			i--;
			goto LOOP1;
		}
		
	}
	if (y == x)
	{
		cout <<"Greatest common divisor: "<< x << endl;
	}

	system("pause");
	return 0;
}