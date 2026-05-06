#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float arr[5],total =0,per;
    cout<<"Enter 5 subject marks";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    per = (total / 500.0) * 100;
    cout<<"Total marks are"<<total<<endl;
    cout<<"percentage ="<<per<<"%";
    return 0;
}
