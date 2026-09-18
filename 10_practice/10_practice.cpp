#include <iostream>
using namespace std;

void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void sortByDesc(int arr[],int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortByAsc(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j - 1] > arr[j]) {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}




int main()
{
    cout << "Enter parameter : " << endl;
    cout << "[1] - descing" << endl;
    cout << "[0] - ascing " << endl;
    const int size = 10;
    int myArr[size] = { 1,6,5,9,7,8,5,6,4,6 };
    int parameter;
    cin >> parameter;
    if (parameter == 1)
    {
        sortByDesc(myArr, size);
        ShowArray(myArr, size);
    }
    else if (parameter == 0)
    {
        sortByAsc(myArr,size);
        ShowArray(myArr, size);
    }
    else
    {
        cout << "Incorrect option" << endl;
    }
    cout << "Task 2" << endl;
}

