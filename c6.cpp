#include <iostream>
using namespace std;
class Book
{
    string title;
    int price;

public:
    Book(string t, int p)
    {
        title = t;
        price = p;
    }
    void display()
    {
        cout << "title:" << title << endl;
        cout << "price:" << price << endl;
    }
};
int main()
{
    Book b1("Famous Five", 10000);
    b1.display();
}
