//column patten(**)

#include<iostream>
using namespace std;
int main()
{
   int n,row,col;
   cout<<"Enter the number the line: ";
   cin>>n;

   for(row =1;row<=n;row++)
   {
       for(col=1;col<=row;col++)
       {
           cout<<" "<<col;

       }
       cout<<endl;
   }
   return 0;
}
