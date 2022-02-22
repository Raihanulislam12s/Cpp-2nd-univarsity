#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter A integer number: ";
    cin>>num;
    if(num>0)
    {
        cout<<"positive";

    }
    else if(num<0)
    {
        cout<<"Nagitve";
    }
    else if(num==0)
    {
        cout<<"Zero";
    }
}
