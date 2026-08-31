#include <iostream>
using namespace std;

int main()
{
	/*int countHours_in_2000_years;
	const int dayIn2000Year = 366;
	int hourInDay = 24;
	countHours_in_2000_years = dayIn2000Year * hourInDay;
	cout << "Hour in 2000 year : " << countHours_in_2000_years << endl;
	


	float discount = 0.05;
	int count = 10;
	float costPrice = 35.99;

	float price = costPrice * count * (1 - discount);


	cout << "You need to pay : " << price << endl;


	int a;
	cout << "Enter a number : ";
	cin >> a;
	cout << "You entered : " << a << endl;*/




	int inc;
	cout << "Enter a count inches of diagonal tv : ";
	cin >> inc;
	const float s = 2.54;
	float Count = inc * s;
	cout << "Diagonal in centimeters : " << Count << endl;



	int k;
	cout << "Enter a count grams to pat humster : ";
	cin >> k;
	int countOfDays = 30;
	float countOfHumstersFood = (k * countOfDays) / 1000;
	cout << "Count of humsters food in kilograms : " << countOfHumstersFood << endl;




}
