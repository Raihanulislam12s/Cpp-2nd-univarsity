#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter 3 number: ";
    cin>>num1>>num2>>num3;
    if(num1>num2&&num1>num3)
    {
        cout<<"Number 1 larger";
    }
    else if(num2>num1&&num2>num3)
    {
        cout<<"Number2 larger";
    }
    else{
        cout<<"Number3 larger";
    }
}
