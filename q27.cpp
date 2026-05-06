#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter 10 items prices ";
    int max = arr[0];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout << "max = " << max;
    return 0;
}
