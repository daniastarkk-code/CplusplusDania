#include <iostream>
using namespace std;

void AorOinString(const char* my_str)
{
    int a = 0;
    int o = 0;
    int size = strnlen(my_str, 200);
    cout << size;
    for (int i = 0; i < size; i++)
    {
        if (my_str[i] == 'o' or my_str[i] == 'O')
        {
            o++;
        }
        if (my_str[i] == 'a' or my_str[i] == 'A')
        {
            a++;
        }
    }
    cout << "Your string has : " << a << "'a' and " << o << "'o'" << '\n';
 }
void SymbolsInString(char str1[])
{
    int letters = 0;
    int digits = 0;
    int spaces = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')) {
            letters++;
        }
        else if (str1[i] >= '0' && str1[i] <= '9') {
            digits++;
        }
        else if (str1[i] == ' ') {
            spaces++;
        }
    }
    cout << "Latino`s leters: " << letters << "\n";
    cout << "Numbers: " << digits << "\n";
    cout << "Spaces: " << spaces << "\n";
}
int my_strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main()
{
    cout << "Task 1" << endl;
    char my_str[200] = "123";
    cout << "Enter your string (max 200 symbols) : \n";
    cin >> my_str;
    AorOinString(my_str);
    cin.ignore();
    cout << "Task 2" << endl;
    char str1[256];
    cout << "Enter string : \n";
    cin.getline(str1, 256);

    
    SymbolsInString(str1);
    cout << "Task 4\n";
    char myString[256];
    cout << "Enter string: ";
    cin.getline(myString, 256);

    int len = my_strlen(myString);
    cout << "Lenth of string: " << len << "\n";

}
