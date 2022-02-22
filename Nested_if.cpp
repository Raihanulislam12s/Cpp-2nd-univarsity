#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter your mark: ";
    cin>>mark;
    if(mark>32)

        {
     if(mark>=80)
    {
        cout<<"your grade: ";
        cout<<"A+";
    }
    else if(mark>70)
    {
        cout<<"your grade: ";
        cout<<"A";
    }
    else if(mark>60)
    {
        cout<<"your grade: ";
        cout<<"A-";
    }
    else if(mark>50)
    {
        cout<<"your grade: ";
        cout<<"B";
    }
    else if(mark>40)
    {
        cout<<"your grade: ";
        cout<<"C";
    }
    else if(mark>=33)
    {
        cout<<"your grade: ";
        cout<<"D";
    }



    }
    else
    {
        cout<<"Sorry,Next time you do will(";
        cout<< "fail)";
    }
}
