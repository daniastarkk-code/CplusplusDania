#include <iostream>
using namespace std;

double power(double base, int exp) {
    if (exp == 0) {
        return 1.0;
    }
    if (exp < 0) {
        return 1.0 / power(base, -exp);
    }
    return base * power(base, exp - 1);
}

void printStars(int n) {
    if (n <= 0) {
        return;
    }
    cout << "*";
    printStars(n - 1);
}

int sumRange(int a, int b) {
    if (a > b) {
        return sumRange(b, a);
    }
    if (a == b) {
        return a;
    }
    return a + sumRange(a + 1, b);
}

int main()
{
    cout << "Task 1" << endl;
    double base;
    int exp;

    cout << "Enter base of number: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> exp;

    cout << base << " in power " << exp << " is " << power(base, exp) << endl;

    cout << "Task 2" << endl;
    int n;
    cout << "Enter count of stars N: ";
    cin >> n;

    printStars(n);
    cout << endl;
    cout << "Task 3" << endl;

    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Sum = " << sumRange(a, b) << endl;
    


}
