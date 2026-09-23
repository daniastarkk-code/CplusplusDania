#include <iostream>
using namespace std;

int* Findmin(int* a, int* b, int* c)
{
    if (*a < *b and *a < *c)
        return a;
    else if (*b < *a and *b < *c)
        return b;
    else
        return c;
}

void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 100;
    }
}

void ShowArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }cout << endl;
}
int* MaxElement(int* arr, int size)
{
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }
    return max;
}
int* MinElement(int* arr, int size)
{
    int* min = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < *min)
        {
            min = arr + i;
        }
    }
    return min;
}


int main()
{
    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    int* parr = arr;
    cout << "Task 1 " << endl;
    int a = 5;
    int* pa = &a;
    int b = 7;
    int* pb = &b;
    int c = 3;
    int* pc = &c;
    int dob = *pa * *pb * *pc;
    cout << "Product of 3 : " << dob << endl;
    int avg = (*pa + *pb + *pc) / 3;
    cout << "Average " << avg << endl;
    cout << "The smallest of 3 is : " << *Findmin(pa,pb,pc) << endl;
    cout << "Task 2 " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }
    cout << endl;
    parr--;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr--;
    }
    cout << "\nTask 3" << endl;
    int arr2[size];
    InitArray(arr2, size);
    ShowArray(arr2, size);
    cout << "Max element in array : " << *MaxElement(arr2, size) << endl;
    cout << "Min element in array : " << *MinElement(arr2, size) << endl;
    int index1, index2;
    cout << "Enter index of lower" <<endl;
    cin >> index1;
    cout << "Enter index of higher " << endl;
    cin >> index2;
    int temp = arr2[index1];
    arr2[index1] = arr2[index2];
    arr2[index2] = temp;
    ShowArray(arr2, size);

  


}

