#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    int area;
public:
    Rectangle(int l,int b)
    {
        length = l;
        breadth = b;
        area = l*b;
    }
    void display()
    {
        cout<<"Length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
        cout<<"Area:"<<area<<endl;
    }
};
int main()
{
    Rectangle r1(2,4);
    r1.display();
}
