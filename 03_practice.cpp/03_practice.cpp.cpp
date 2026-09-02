#include <iostream>
using namespace std;

int main()
{
	cout << "1. India" << endl;
	cout << "2. USA" << endl;
	cout << "3. UK" << endl;
	cout << "4. Canada" << endl;
	cout << "5. Australia" << endl;
	int a;
	cout << "Enter a number of country you want to know capital : " << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "Capital of India is New Delhi" << endl;
		break;
	case 2:
		cout << "Capital of USA is Washington D.C." << endl;
		break;
	case 3:
		cout << "Capital of UK is London" << endl;
		break;
	case 4:
		cout << "Capital of Canada is Ottawa" << endl;
		break;
	case 5:
		cout << "Capital of Australia is Canberra" << endl;
		break;
	}





	int b;
	cout << "enter number of week" << endl;
	cin >> b;
	if (b == 6 or b == 7)
	{
		cout << "it's weekend" << endl;
	}
	else
		cout << "it`s not weekend" << endl;


	cout << "1. North" << endl;
	cout << "2. South" << endl;
	cout << "3. East" << endl;
	cout << "4. West" << endl;
	int c;
	cout << "Enter direction of ship" << endl;
	cin >> c;
	if (c == 1)
	{
		cout << "Ship is moving towards South" << endl;
	}
	else if (c == 2)
	{
		cout << "Ship is moving towards North" << endl;
	}
	else if (c == 3)
	{
		cout << "Ship is moving towards West" << endl;
	}
	else if (c == 4)
	{
		cout << "Ship is moving towards East" << endl;
	}
	else
	{
		cout << "Invalid direction" << endl;
	}
	cout << "1. Dog" << endl;
	cout << "2. Donkey" << endl;
	cout << "3. Cat" << endl;
	cout << "4. Cow" << endl;
	cout << "5. Horse" << endl;
	cout << "6. Elephant" << endl;
	cout << "7. Lion" << endl;
	int animal;
	cout << "Enter number of animal you want to be : " << endl;
	cin >> animal;

	if (animal == 1)
	{
		cout << "Its predator";
	}
	else if (animal == 2)
	{
		cout << "Its herbivore";
	}
	else if (animal == 3)
	{
		cout << "Its predator";
	}
	else if (animal == 3)
	{
		cout << "Its herbivore";
	}
	else if (animal == 4)
	{
		cout << "Its herbivore";
	}
	else if (animal == 5)
	{
		cout << "Its herbivore";
	}
	else if (animal == 6)
	{
		cout << "Its herbivore";
	}
	else if (animal == 7)
	{
		cout << "Its predator";
	}
	else
	{
		cout << "Invalid animal number" << endl;
	}

}

