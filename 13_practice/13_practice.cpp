#include <iostream>
#include <conio.h>
using namespace std;

int* CreateArray(int size)
{
	int* arr = new int[size];
	return arr;
}
void InitArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void deleteLast(int*& arr, int& size) {
	if (size <= 0) return;
	if (size == 1) {
		delete[] arr;
		arr = nullptr;
		size = 0;
		return;
	}
	int* newArr = new int[size - 1];
	for (int i = 0; i < size - 1; i++) {
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
	size--;
}
void putOnPosition(int*& arr, int& size, int index, int value) {
	if (index < 0 || index > size) return;
	int* newArr = new int[size + 1];
	for (int i = 0; i < index; i++) {
		newArr[i] = arr[i];
	}
	newArr[index] = value;
	for (int i = index; i < size; i++) {
		newArr[i + 1] = arr[i];
	}
	delete[] arr;
	arr = newArr;
	size++;
}

int main()
{
    cout << "Task 1" << endl;
	int* pInt = new int(5);
	double* pDouble = new double(2.5);
	float* pFloat = new float(4.0);
	double product = (*pInt) * (*pDouble) * (*pFloat);
	cout << "int:    " << *pInt << endl;
	cout << "double: " << *pDouble << endl;
	cout << "float:  " << *pFloat << endl;
	cout << "-----------------------------------" << endl;
	cout << "Product: " << product << endl;

	delete pInt;
	delete pDouble;
	delete pFloat;
	cout << "Task 2" << endl;
	int size = 5;
	int* arr = CreateArray(size);

	InitArray(arr, size);
	cout << "Array: ";
	ShowArray(arr, size);

	deleteLast(arr, size);
	cout << "After delete last: ";
	ShowArray(arr, size);

	putOnPosition(arr, size, 2, 99);
	cout << "After put 99 at index 2: ";
	ShowArray(arr, size);

	delete[] arr;
}

