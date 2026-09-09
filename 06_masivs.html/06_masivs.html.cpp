#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int arr[SIZE] = { 5, 10, 15, 20, 25 };
	int min = 0, max = 0;
	int summa = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
		{
			summa += arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	
		
	}
}
