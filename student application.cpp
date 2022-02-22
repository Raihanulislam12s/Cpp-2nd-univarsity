#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of student: ";
    cin>>n;

    int student[n];
    int sum;
    for(int i=0;i<n;i++)
    {
        cin>>student[i];
        sum =sum + student[i];
    }
    cout<<"Total marks: "<<sum<<endl;

    float avg=(float)sum/n;

    cout<<"Average : "<<avg;

}
