#include<iostream>
using namespace std;
int main()
  {
    int marks[10];
    cout<<"Enter you marks: "<<endl;

     //input
    for(int i=0;i<10;i++)
    {
        cout<<"Marks for student"<<i+1<<"=";
        cin>>marks[i];
    }

     //output
    cout<<"Marks are: "<<endl;

    for( int i=0;i<10;i++)
    {
         cout<<"Marks for student"<<i+1<<"=";
        cout<<marks[i]<<" "<<endl;
    }

  }
