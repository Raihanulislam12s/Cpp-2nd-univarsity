#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter 3 Number: ";
    cin>>num1>>num2>>num3;
    if(num1>num2||num1>num3)
    {
        cout<<"Number1 larger";
    }
    else if(num2>num1||num2>num3)
    {
        cout<<"Number2 larger";

    }
    else if(num3>num1||num3>num2)

    {
        cout<<"Number3 larger";
    }

}
