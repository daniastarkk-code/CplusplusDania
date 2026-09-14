#include <iostream>
using namespace std;

int DrawRectangle(int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
	return 0;
}
void Factorial()
{
    int n;
    cout << "Enter number factorial of what u need to know : ";
    cin >> n;
    int fact = 1;
    int k = 1;
    for (int  i = 1; i <= n; i++)
    {
        fact *= i;

    }
    cout << "FActorial " << n << "equalse : " << fact << endl;


}
bool isPrime(int number)
{
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            cout << "Number is prime" << endl;
        }
    }

    cout << "Number is simple" << endl;
    
}
void CubeOfNumber()
{
    int number_to_cube;
    cout << "ENter number cube u want to know : " << endl;
    cin >> number_to_cube;
    int cube = number_to_cube * number_to_cube * number_to_cube;
    cout << "Cube of your number : " << cube << endl;
}
void findMinMax(const int arr[], int size, int& minVal, int& minPos, int& maxVal, int& maxPos) {
    if (size <= 0) return;

    minVal = arr[0];
    minPos = 0;
    maxVal = arr[0];
    maxPos = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minPos = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxPos = i;
        }
    }
}

int main()
{
	DrawRectangle(5, 3);
	Factorial();
    int number;
    cout << "Enter number to know is it prime : ";
    cin >> number;
    isPrime(number);
    CubeOfNumber();
    int arr[] = { 12, 4, 19, -5, 42, -5, 8 };
    int size = 6;

    int minVal, minPos, maxVal, maxPos;
    findMinMax(arr, size, minVal, minPos, maxVal, maxPos);

    cout << "Min: " << minVal << " Index: " << minPos << "\n";
    cout << "Max: " << maxVal << " Index: " << maxPos << "\n"; 
}
