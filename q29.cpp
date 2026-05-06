#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter 10 temperatures";
    min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout << "min = " << min;
    return 0;
}
