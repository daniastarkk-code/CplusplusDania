#include <iostream>

using namespace std;

void InitArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}

void ShowArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void addRowStart(int**& arr, int& rows, int cols, int* row) {
    int** res = new int* [rows + 1];
    res[0] = new int[cols];
    for (int j = 0; j < cols; j++) 
    {
        res[0][j] = row[j];
    }
    for (int i = 0; i < rows; i++) 
    {
        res[i + 1] = arr[i];
    }
    delete[] arr;
    arr = res;
    rows++;
}

void deleteRowStart(int**& arr, int& rows) 
{
    if (rows <= 0) return;
    delete[] arr[0];
    int** res = new int* [rows - 1];
    for (int i = 1; i < rows; i++) {
        res[i - 1] = arr[i];
    }
    delete[] arr;
    arr = res;
    rows--;
}

void deleteRowAt(int**& arr, int& rows, int idx) {
    if (idx < 0 || idx >= rows) return;
    delete[] arr[idx];
    int** res = new int* [rows - 1];
    for (int i = 0, k = 0; i < rows; i++) 
    {
        if (i != idx) {
            res[k++] = arr[i];
        }
    }
    delete[] arr;
    arr = res;
    rows--;
}

void addColStart(int** arr, int rows, int& cols, int* col) {
    for (int i = 0; i < rows; i++) 
    {
        int* res = new int[cols + 1];
        res[0] = col[i];
        for (int j = 0; j < cols; j++)
        {
            res[j + 1] = arr[i][j];
        }
        delete[] arr[i];
        arr[i] = res;
    }
    cols++;
}

void addColAt(int** arr, int rows, int& cols, int* col, int idx) {
    if (idx < 0 || idx > cols)  return;
    for (int i = 0; i < rows; i++) 
    {
        int* res = new int[cols + 1];
        for (int j = 0, k = 0; j <= cols; j++)
        {
            if (j == idx) {
                res[j] = col[i];
            }
            else {
                res[j] = arr[i][k++];
            }
        }
        delete[] arr[i];
        arr[i] = res;
    }
    cols++;
}


int main() {
    int rows = 5, cols = 3;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) 
    {
        arr[i] = new int[cols];
    }
    cout << "Task 1" << endl;
    InitArray(arr, rows, cols);
    ShowArray(arr, rows, cols);

    int* newRow = new int[cols];
    for (int j = 0; j < cols; j++) newRow[j] = rand() % 90 + 10;
    addRowStart(arr, rows, cols, newRow);
    delete[] newRow;
    ShowArray(arr, rows, cols);

    cout << "Task 2" << endl;

    deleteRowStart(arr, rows);
    ShowArray(arr, rows, cols);

    cout << "Task 3" << endl;

    deleteRowAt(arr, rows, 1);
    ShowArray(arr, rows, cols);

    cout << "Task 4" << endl;

    int* newCol1 = new int[rows];
    for (int i = 0; i < rows; i++) newCol1[i] = rand() % 90 + 10;
    addColStart(arr, rows, cols, newCol1);
    delete[] newCol1;
    ShowArray(arr, rows, cols);

    cout << "Task 5" << endl;

    int* newCol2 = new int[rows];
    for (int i = 0; i < rows; i++) newCol2[i] = rand() % 90 + 10;
    addColAt(arr, rows, cols, newCol2, 1);
    delete[] newCol2;
    ShowArray(arr, rows, cols);



    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

}