#include<iostream>
using namespace std;


int linearSearch(int arr[],int n,int key)

{

    for(int i=0; i<n; i++)
    {
    if(arr[i]==key)
    {
        cout<<"The Searching Array index Number is:";
        return i;
    }

    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;


    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Number-"<<i+1<<"=";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter The Searching Number:";
    cin>>key;
    cout<<linearSearch(arr, n, key)<<endl;

    return 0;
}

