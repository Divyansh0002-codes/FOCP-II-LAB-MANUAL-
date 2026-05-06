#include<iostream>
using namespace std;
class Student
{
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }
    void display()
    {
        cout << "name:" << name << endl;
        cout << "marks:" << marks << endl;
    }
};
int main()
{
    Student s1("Rahul",56);
    s1.display();
}
