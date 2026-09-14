#include <iostream>
using namespace std;


void sayHello()
{
	cout << "Hello, World!" << endl;
}

void AnyLine(char symbol, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

void Power(int base, int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	cout << base << "^" << exponent << " = " << result << endl;
}

int main()
{
	AnyLine('$',100);
	AnyLine('*', 15);
	Power(2, 3);
     
}
