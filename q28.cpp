#include<iostream>
using namespace std;
int main()
{
    int arr[5],s1=0,s2=0;
    cout<<"Enter 5 numbers";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            s1+=arr[i];
        }
        else
        {
            s2+=arr[i];
        }
    }
    cout << "Sum of even numbers =" << s1<<endl;
    cout << "Sum of odd numbers =" << s2;
    return 0;
}
