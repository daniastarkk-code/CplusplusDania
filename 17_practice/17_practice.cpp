#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

struct Book
{
    char name[50];
    char author[255];
    char publisher[60];
    char genre[50];
    int year;
    float price;
};

void ShowLIbrary(Book film)
{
    int len;

    cout << "| ";
    len = 0; while (film.name[len] != '\0') len++;
    for (int i = 0; i < 22; i++) cout << (i < len ? film.name[i] : ' ');

    cout << " | ";
    len = 0; while (film.author[len] != '\0') len++;
    for (int i = 0; i < 20; i++) cout << (i < len ? film.author[i] : ' ');

    cout << " | ";
    len = 0; while (film.publisher[len] != '\0') len++;
    for (int i = 0; i < 22; i++) cout << (i < len ? film.publisher[i] : ' ');

    cout << " | ";
    len = 0; while (film.genre[len] != '\0') len++;
    for (int i = 0; i < 15; i++) cout << (i < len ? film.genre[i] : ' ');

    cout << " | ";
    cout << film.year;
    int y = film.year < 0 ? -film.year : film.year;
    int yDigits = (film.year <= 0) ? 1 : 0;
    while (y > 0) { yDigits++; y /= 10; }
    for (int i = yDigits; i < 6; i++) cout << ' ';


    cout << " | ";
    cout << film.price;
    int p = (int)film.price;
    int pDigits = (p <= 0) ? 1 : 0;
    while (p > 0) { pDigits++; p /= 10; }
    pDigits += 3; 
    for (int i = pDigits; i < 8; i++) cout << ' ';

    cout << " |" << endl;
}


void ChangeDataOfBook(Book* film, char name[], char author[], char publisher[], char genre[], int year, float price)
{
    strcpy_s(film->name, name);
    strcpy_s(film->author, author);
    strcpy_s(film->publisher, publisher);
    strcpy_s(film->genre, genre);
    film->year = year;
    film->price = price;
}

void SearchByAuthor(char author[], Book* films, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].author, author) == 0)
        {
            ShowLIbrary(films[i]);
        }
    }
}

void SearchByName(char name[], Book* films, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].name, name) == 0)
        {
            ShowLIbrary(films[i]);
        }
    }
}

void SearchByPublisher(char publisher[], Book* films, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].publisher, publisher) == 0)
        {
            ShowLIbrary(films[i]);
        }
    }
}

void SearchByGenre(char genre[], Book* films, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].genre, genre) == 0)
        {
            ShowLIbrary(films[i]);
        }
    }
}

void AddNewBook(Book* films, int size, char name[], char author[], char publisher[], char genre[], int year, float price)
{
    ChangeDataOfBook(&films[size], name, author, publisher, genre, year, price);
}

void DeleteBookByName(Book* films, int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].name, name) == 0)
        {
            for (int j = i; j < size - 1; j++)
            {
                films[j] = films[j + 1];
            }
            break;
        }
    }
}

int main()
{
    int size = 10;
    int capacity = 100;

    Book* library = new Book[capacity]{
        {"The Great Gatsby", "F. Scott Fitzgerald", "Charles Scribner's Sons", "Novel", 1925, 10.99f},
        {"To Kill a Mockingbird", "Harper Lee", "J.B. Lippincott & Co.", "Novel", 1960, 12.99f},
        {"1984", "George Orwell", "Secker & Warburg", "Dystopian", 1949, 9.99f},
        {"Pride and Prejudice", "Jane Austen", "T. Egerton, Whitehall", "Romance", 1813, 8.99f},
        {"The Catcher in the Rye", "J.D. Salinger", "Little, Brown and Company", "Novel", 1951, 11.99f},
        {"The Hobbit", "J.R.R. Tolkien", "George Allen & Unwin", "Fantasy", 1937, 14.99f},
        {"Moby-Dick", "Herman Melville", "Harper & Brothers", "Adventure", 1851, 13.99f},
        {"War and Peace", "Leo Tolstoy", "The Russian Messenger", "Historical Fiction", 1869, 15.99f},
        {"The Odyssey", "Homer", "Ancient Greece", "Epic Poetry", -800, 7.99f},
        {"The Divine Comedy", "Dante Alighieri", "Italy", "Epic Poetry", 1320, 16.99f}
    };

    int choice;
    char buffer[255];

    do
    {
        system("cls");
        cout << "-------------- Menu -----------------" << endl;
        cout << "Show all library         [1]" << endl;
        cout << "Search by name           [2]" << endl;
        cout << "Search by author         [3]" << endl;
        cout << "Search by genre          [4]" << endl;
        cout << "Search by publisher      [5]" << endl;
        cout << "Change data about book   [6]" << endl;
        cout << "Add new book             [7]" << endl;
        cout << "Delete book by name      [8]" << endl;
        cout << "Exit                     [0]" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "\n------------------------------------------------------------------------------------------------------\n";
            cout << "| Name                   | Author               | Publisher              | Genre           | Year   | Price    |\n";
            cout << "------------------------------------------------------------------------------------------------------\n";
            for (int i = 0; i < size; i++)
            {
                ShowLIbrary(library[i]);
            }
            cout << "------------------------------------------------------------------------------------------------------\n";
            break;

        case 2:
            cout << "Enter book name: ";
            cin.getline(buffer, 255);
            cout << "\n------------------------------------------------------------------------------------------------------\n";
            cout << "| Name                   | Author               | Publisher              | Genre           | Year   | Price    |\n";
            cout << "------------------------------------------------------------------------------------------------------\n";
            SearchByName(buffer, library, size);
            cout << "------------------------------------------------------------------------------------------------------\n";
            break;

        case 3:
            cout << "Enter author: ";
            cin.getline(buffer, 255);
            cout << "\n------------------------------------------------------------------------------------------------------\n";
            cout << "| Name                   | Author               | Publisher              | Genre           | Year   | Price    |\n";
            cout << "------------------------------------------------------------------------------------------------------\n";
            SearchByAuthor(buffer, library, size);
            cout << "------------------------------------------------------------------------------------------------------\n";
            break;

        case 4:
            cout << "Enter genre: ";
            cin.getline(buffer, 255);
            cout << "\n------------------------------------------------------------------------------------------------------\n";
            cout << "| Name                   | Author               | Publisher              | Genre           | Year   | Price    |\n";
            cout << "------------------------------------------------------------------------------------------------------\n";
            SearchByGenre(buffer, library, size);
            cout << "------------------------------------------------------------------------------------------------------\n";
            break;

        case 5:
            cout << "Enter publisher: ";
            cin.getline(buffer, 255);
            cout << "\n------------------------------------------------------------------------------------------------------\n";
            cout << "| Name                   | Author               | Publisher              | Genre           | Year   | Price    |\n";
            cout << "------------------------------------------------------------------------------------------------------\n";
            SearchByPublisher(buffer, library, size);
            cout << "------------------------------------------------------------------------------------------------------\n";
            break;

        case 6:
        {
            int index;
            cout << "Enter index of book to change (0 to " << size - 1 << "): ";
            cin >> index;
            cin.ignore();
            if (index >= 0 && index < size)
            {
                char name[50], author[255], publisher[60], genre[50];
                int year;
                float price;

                cout << "Enter new Name: "; cin.getline(name, 50);
                cout << "Enter new Author: "; cin.getline(author, 255);
                cout << "Enter new Publisher: "; cin.getline(publisher, 60);
                cout << "Enter new Genre: "; cin.getline(genre, 50);
                cout << "Enter new Year: "; cin >> year;
                cout << "Enter new Price: "; cin >> price;
                cin.ignore();

                ChangeDataOfBook(&library[index], name, author, publisher, genre, year, price);
                cout << "\n[+] Book data updated successfully!\n";
            }
            else
            {
                cout << "\n[!] Invalid index!\n";
            }
            break;
        }

        case 7:
        {
            char name[50], author[255], publisher[60], genre[50];
            int year;
            float price;

            cout << "Enter Name: "; cin.getline(name, 50);
            cout << "Enter Author: "; cin.getline(author, 255);
            cout << "Enter Publisher: "; cin.getline(publisher, 60);
            cout << "Enter Genre: "; cin.getline(genre, 50);
            cout << "Enter Year: "; cin >> year;
            cout << "Enter Price: "; cin >> price;
            cin.ignore();

            AddNewBook(library, size, name, author, publisher, genre, year, price);
            size++;
            cout << "\n[+] New book added successfully!\n";
            break;
        }

        case 8:
        {
            cout << "Enter book name to delete: ";
            cin.getline(buffer, 255);
            DeleteBookByName(library, size, buffer);
            size--;
            cout << "\n[-] Book deleted successfully!\n";
            break;
        }

        case 0:
            cout << "\nExiting...\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
            break;
        }

        if (choice != 0)
        {
            cout << "\nPress any key to continue...";
            _getch();
        }

    } while (choice != 0);


    ofstream outLibrary;
	outLibrary.open("Library.txt", ios_base::out);
	outLibrary.close();
	char buffer[255];
    ifstream inLibrary;
	inLibrary.open("Library.txt", ios_base::in);
    if (inLibrary.is_open())
    {
        while (!inLibrary.eof())
        {
            inLibrary.getline(buffer, 255);
            cout << buffer << endl;
		}
    }
    inLibrary >> buffer;
	inLibrary.close();
}