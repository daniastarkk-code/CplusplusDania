#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int* pa = &a;
    
    int b = 10;
    int* pb = &b;

    cout << "a = " << a << endl;
    cout << "pa = " << pa << endl;
    cout << "b = " << b << endl;
    cout << "pb = " << pb << endl;


    const int size = 10;
    int arr[size]{};
    int* parr = &arr[0];
    cout << arr[0] << endl;
    cout << parr << endl;

    cout << "******************" << endl;
    for (int i = 0; i < size; i++)
    {
        *parr = rand() % 100;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << parr << endl;
    cout << *parr << endl;
    cout << parr + 1 << endl;
    cout << *parr + 1 << endl;
}

