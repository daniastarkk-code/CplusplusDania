#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream check("File1.txt");
    if (check.is_open()) {
        cout << "File exists. It will be overwritten.\n";
        check.close();
    }
    else {
        cout << "File does not exist. Creating new file.\n";
    }

    ofstream file("File1.txt");
    if (!file.is_open()) {
        return 1;
    }

    char buffer[256];
    for (int i = 1; i <= 5; ++i) {
        cout << "Line " << i << ": ";
        cin.getline(buffer, 256);
        file << buffer << "\n";
    }

    file.close();

    ifstream inFile("File1.txt");
    if (!inFile.is_open()) {
        cout << "File does not exist or cannot be opened.\n";
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        cout << ch;
    }

    inFile.close();
}
