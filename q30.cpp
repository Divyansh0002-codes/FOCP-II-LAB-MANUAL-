#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int total=0,avg;
    for(int i=1;i<=10;i++)
    {
        cin>>arr[i];
        total = total + arr[i];
        avg = total/10;
    }
    cout<<"TOTAL IS ="<<total;
    cout<<"AVERAGE IS="<<avg;   
}
