#include<iostream>
using namespace std;
int main()
{
    int num,x[30];
    cout<<"Enter the number of size: "<<endl;
    cin>>num;
    x[0]=0;
    x[1]=1;
    for(int i=0;i<num;i++)
    {
         x[i]=x[i-1]+x[i-2];
    }
    cout<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<" "<<x[i];
    }

}
