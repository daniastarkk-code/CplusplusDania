#include <iostream>
using namespace std;

int MaxOfTwo(int a, int b)
{
    return (a > b) ? a : b;
    
}

float MaxOfTwo(float a,float b)
{
    return (a > b) ? a : b;
}

double MaxOfTwo(double a, double b)
{
    return max(a,b);
}
int MaxOfThree(int i, int j, int k)
{
    if (i > j && i > k)
    {
        return i;
    }
    else if (j > k)
    {
        return j;
    }
    else
    {
        return k;
    }
}

double MaxOfThree(double i, double j, double k)
{
    if (i > j && i > k)
    {
        return i;
    }
    else if (j > k)
    {
        return j;
    }
    else
    {
        return k;
    }
}

float MaxOfThree(float i, float j, float k)
{
    if (i > j && i > k)
    {
        return i;
    }
    else if (j > k)
    {
        return j;
    }
    else
    {
        return k;
    }
}

int MinOfTwo(int a, int b)
{
    return min(a,b);
}
float MinOfTwo(float a, float b)
{
    return min(a, b);
}
double MinOfTwo(double a, double b)
{
    return min(a, b);
}

float MinOfThree(float i, float j, float k)
{
    if (i < j && i < k)
    {
        return i;
    }
    else if (j < k)
    {
        return j;
    }
    else
    {
        return k;
    }
}

int  MinOfThree(int  i, int j, int k)
{
    if (i < j && i < k)
    {
        return i;
    }
    else if (j < k)
    {
        return j;
    }
    else
    {
        return k;
    }
}
double MinOfThree(double i, double j, double k)
{
    if (i < j && i < k)
    {
        return i;
    }
    else if (j < k)
    {
        return j;
    }
    else
    {
        return k;
    }
}
int AverageInArr(int MyMass[], int size)
{
    
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < size; i++) {
        sum += MyMass[i];
    }
    return avg = sum / size;
}


template <typename T>
T findMax1D(const T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T, size_t Rows, size_t Cols>
T findMax2D(const T(&arr)[Rows][Cols]) {
    T maxVal = arr[0][0];
    for (size_t i = 0; i < Rows; ++i) {
        for (size_t j = 0; j < Cols; ++j) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}



int main()
{
    const int size = 9;
    int a = 4;
    int b = 6;
    cout << "Number : " << MaxOfTwo(a,b) << " is bigger";
    cout << MaxOfThree(1, 2, 3) << endl;
    cout << MinOfTwo(1.2, 3.7) << endl;
    cout << MinOfThree(133333, 555555555, 444444444) << endl;
    cout << "------------------------------------" << endl;
    int MyMass[size] = { 1, 2, 3, 5, 6, 9, 7, -6, 0 };
    cout << "Average in this mas" << endl;
    cout << "{ 1, 2, 3, 5, 6, 9, 7, -6, 0 }" << endl;
    cout << AverageInArr(MyMass,size) << endl;
    cout << "------------------------------------" << endl;


    int array1D_int[] = { 5, -2, 18, 9, 3 };
    double array1D_double[] = { 3.14, 15.9, 2.71, 8.88 };

    cout << "Max in arr1demention integer: " << findMax1D(array1D_int, 5) << endl;
    cout << "Max in arr1demention double: " << findMax1D(array1D_double, 4) << endl;

    cout << "------------------------------------" << endl;

    int array2D_int[2][3] = {
        {10, 4, 7},
        {3, 99, 12}
    };

    double array2D_double[3][2] = {
        {1.1, 4.5},
        {9.2, 0.3},
        {8.7, 7.4}
    };

    cout << "Max in arr2demention integer: " << findMax2D(array2D_int) << endl;
    cout << "Max in arr2demention double: " << findMax2D(array2D_double) << endl;
}

