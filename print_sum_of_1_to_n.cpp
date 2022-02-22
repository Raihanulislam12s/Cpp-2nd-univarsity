//1+2+3+4+......+n

#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"enter the last number: ";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        sum=sum+1;
        cout<<sum<<endl;

    }
}
