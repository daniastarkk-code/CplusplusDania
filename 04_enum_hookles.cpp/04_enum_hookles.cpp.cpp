#include <iostream>
using namespace std;


int main()
{
    /*enum countries { USA = 1, Ukraine = 380, France = 33, Italy = 39 };
    cout << USA << endl;
    cout << Ukraine << endl;*/

    float a, b, res;
    char key;
    cout << "Enter a : "; cin >> a;
    cout << "Enter b : "; cin >> b;
    cout << "\tChoose the operation : " << endl;;
    cout << " [+] - add number" << endl;
    cout << " [-] - sub number" << endl;
    cout << " [*] - multy number" << endl;
    cout << " [/] - div number" << endl;
    cin >> key;
    while (key != 'e')
    {
        switch (key)

        {

        default:

            cout << "Error choice!!!!" << endl;

            break;

        case '+':

            res = a + b;

            cout << "Resualt = " << res << endl;

            break;

        case '-':

            res = a - b;

            cout << "Resualt = " << res << endl;

            break;

        case '*':

            res = a * b;

            cout << "Resualt = " << res << endl;

            break;

        case '/':

            res = a / b;

            cout << "Resualt = " << res << endl;

            break;
        case 'e':
            cout << "Exit" << endl;
            break;
        }



    }
}