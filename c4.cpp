#include<iostream>
using namespace std;
class employee
{
    int empid;
    int sal;
public:
    employee(int e,int s)
    {
        empid=e;
        sal=s;
    }
    void display()
    {
        cout<<"employee id:"<<empid<<endl;
        cout<<"salary:"<<sal<<endl;
    }
};
int main()
{
    employee e1(246,15000);
    e1.display();
}
