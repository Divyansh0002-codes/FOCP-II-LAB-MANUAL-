#include <iostream>
using namespace std;
void swap(int &a, int &b);
void swap(float &a, float &b);
void swap(double &a, double &b);
int main()
{
    int x = 10, y = 20;
    float p = 10.5, q = 20.5;
    double m = 10.9785, n = 20.5678;
    swap(x, y);
    swap(p, q);
    swap(m, n);
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "\n After swapping : " << a << " " << b;
}
void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
    cout << "\n After swapping : " << a << " " << b;
}
void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
    cout << "\n After swapping : " << a << " " << b;
}
