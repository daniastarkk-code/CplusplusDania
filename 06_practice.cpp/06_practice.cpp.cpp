#include <iostream>
using namespace std;

int main()
{
	cout << "First task" << endl;
	const int SIZE = 10;
	int numbers[SIZE];
	for (int i = 0;i < SIZE; i++)
	{
		cout << "enter number:  ";
		cin >> numbers[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << "\nsecond task" << endl;
	const int size2 = 7;
	int numbers2[size2];
	int k = 0;
	int l = 0;
	for (int i = 0; i < size2; i++)
	{
		cout << "enter number:  ";
		cin >> numbers2[i];
		if (numbers2[i] < 0)
		{
			k++;
		}
		else if (numbers2[i] > 0)
		{
			l++;
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << numbers2[i] << " ";
	}
	cout << "\nnumber of negative numbers: " << k << endl;
	cout << "number of positive numbers: " << l << endl;

	cout << "third task" << endl;
	int c = 0;
	int d;
	long  numbers3[size2] = { 32, -96, 112, 568, 1488, -67, 52 };
	for (int h = 0; h < size2; h++)
	{
		cout << numbers3[h] << " ";
		d = numbers3[h];
		if (d % 10 <=9)
		{
			c+=d;
		}
	}
	cout << "\nsum of numbers: " << c << endl;
	cout << "Fourth task" << endl;
	int numbers4[SIZE];
	int stepin = 0;
	int num = 1;
	for(int i = 0; i < SIZE; i++)
	{
		while (stepin < i)
		{
			num*=2;
			stepin++;
		}
		numbers4[i] = num;
	}
	for (int i = 1; i < SIZE; i++)
	{
		cout << numbers4[i] << " ";
	}
	cout << "Fifth task" << endl;
	int numbers5[SIZE] = { 42, 52, -67, 1488, 228, -1161, 10, -7, 5, -16 };
	for (int i = 0; i < SIZE; i++)
	{
		if (numbers5[i] < 0)
		{
			numbers5[i] *= -1;
		}
	}
	for (int i = 1; i < SIZE; i++)
	{
		cout << numbers5[i] << " ";
	}
	cout << "\nEighth task" << endl;
	int SIZE_Month = 12;
	int month_range_1;
	int month_range_2;
	cout << "Enter the first month number: ";
	cout << "Enter the second month number: ";
	cin >> month_range_1; cin >> month_range_2;
	

}
