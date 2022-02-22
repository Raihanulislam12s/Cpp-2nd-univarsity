#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of array: ";
    cin>>n;

    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<num[i];
    }

    int max=num[0];
    for(int i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    cout<<"Maximum: "<<max;
}
