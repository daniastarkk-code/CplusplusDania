#include <iostream>
using namespace std;


int main()
{
	/*cout << "Exercise 1" << endl;


	int i = 1;
	do
	{

		cout << i << endl;
		i++;
	} while (i < 101);*/



	/*cout << "Exercise 2" << endl;
	int i = 2;
	do
	{
		if (i % 2 == 0) {
			cout << i << endl;
		}
		i++;
	} while (i < 201);*/

	/*cout << "Exercise 3" << endl;
	int n;
	cout << "Enter count of numbers (N): ";
	cin >> n;

	int sum = 0;
	int count = 0;
	int number;


	while (count < n) {
		cout << "Enter number : ";
		cin >> number;


		if (number % 2 == 0) {
			sum += number;
		}

		count++;
	}

	cout << "Sum of even numbers : " << sum << endl;

	return 0;*/




	/*cout << "Exercise 4" << endl;
	int k = 1;
	int sum = 0;
	int last_k = 13;
	for (k; k <= last_k; k++)
	{
		sum += k;
		int newk = sum + k + 1;

		cout << "Sum of hours are : " << sum << endl;
	}*/



	cout << "Exercise 5" << endl;

	int suma = 0;
	int number;

	for (number;;number++) {
		
		cout << "Enter number : ";
		cin >> number;
		if (number == 0) {
			cout << "Exit !" << endl;
			break;
		}
	
		suma += number;
		cout << suma << endl;

	}

	






}