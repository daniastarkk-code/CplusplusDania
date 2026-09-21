#include <iostream>
using namespace std;

int Binarysearch(int arr[], int size, int key)
{
	int B = 0, E = size - 1;
	while (true)
	{
		/*B = 0, E = 9*/
		int p = (B + E) / 2;
		if (key > arr[p])
		{
			B = p + 1;
		}
		else if (key < arr[p])
		{
			E = p - 1;
		}
		else if (key == arr[p])
		{
			return p;
		}
	}
}

void Foo()
{
	cout << "Hello world";
	Foo();
}
int main()
{
	Foo();
}
