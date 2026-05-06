#include<iostream>
using namespace std;
class Car
{
    string base;
    int price;
public:
    Car(string s, int n)
    {
        base = s;
        price = n; 
    }
    void display()
    {
        cout<<"base:"<<base<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main()
{
    Car c1("seltos", 20000);
    Car c2("creta", 20000);
    c1.display();
    c2.display();
}
