#include <iostream>
using namespace std;
class Bankbalance
{
    int accnum;
    int bal;

public:
    Bankbalance(int a, int b)
    {
        accnum = a;
        bal = b;
    }
    void display()
    {
        cout << "account id:" << accnum << endl;
        cout << "Balance:" << bal << endl;
    }
};
int main()
{
    int a,b;
    cout<<"Enter account id"<<endl;
    cin>>a;
    cout<<"Enter balance"<<endl;
    cin>>b;
    Bankbalance b1(a,b);
    b1.display();
}
