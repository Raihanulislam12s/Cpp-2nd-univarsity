#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key);

for(int i=0;i<n;i++)
{
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;


    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearSearch(int arr[],int n,int key)

    return 0;
}
