#include <iostream>
#include <Windows.h>
#include "Book.h"
#include "FileBook.h"

using namespace std;

template <class T>
class Demo {
    T _a;
    T _b;
public:  
    Demo(){}
    Demo(T a, T b) {
        _a = a;
        _b = b;
    }   

    void Add(){
        cout << _a << " " << _b << endl;
    }
};

template <typename T>
void display(string p, T& value) {
    cout << p;
    cin >> value;

    while (cin.fail()) {
        cin.clear(); // восстанавливает поток ввода после ошибки
        cin.ignore(32767, '\n'); // очищает буфер ввода

        cout << p;
        cin >> value;
    }

    cout << value;
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*int y = 5;
    int* p = &y;
    Book b{"автор 1", "книга 1" , (char*)"издатель 1", 2000,498};
    Book b2{"автор 1", "книга 2 автора 1" , (char*)"издатель 1", 2022,356};
    Book b3{"автор 1", "книга 3 автора 1" , (char*)"издатель 1", 2022,356};
    Book b4{"автор 1", "книга 4 автора 1" , (char*)"издатель 1", 2022,356};
    Book b1{ "автор 2", "книга 2" , (char*)"издатель 2", 2007,678 };

    int size = 5;
    Book* books = new Book[size]{b, b1, b2, b3, b4};
    //books->ShowAuthorBook(cout, "автор 1", size);
    //books->ShowPublisherBook(cout, "издатель 1", size);
    //books->ShowYearBook(cout, 2007, size);
    FileBook fb{(char*)"text.txt"};

    //fb.SaveBookFile(books, 5);
    Book* books2 = fb.LoadBookFile();
    books2->ShowYearBook(cout, 2022, size);*/

    //int number;
    //display("Enter number: ", number);

    Demo<int> d{3, 5};
    //d.Add();
    Demo<int*> d2{ new int[3] {1,2,3},  new int[3] {1,2,3} };
    d2.Add();

}
