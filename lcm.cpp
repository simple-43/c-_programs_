#include<iostream>

using namespace std;

int main()
{
     int a,arr[10],count=2;
     cin>>a;

     for(int i=2;i<a/2;i++)
     {
         if((a%2)==0)
         {
             arr[i]=2;
             a = a/2;
             count++;
         }
         else{
             if((a%i)==0)
             {
                 arr[i] = a/i;
                 a = a/i;
                 count++;
             }
         }
     }

     for(int j=count;j>2;j--)
     {
         cout<<arr[j]<<endl;
     }
     return 0;
}