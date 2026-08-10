#include<iostream>
using namespace std;
int main()
{
   int a[7]={1,5,3,4,3,5,6};
   int i,j;
   for(i=0;i<6;i++)
   {
       for(j=i+1;j<7;j++)
       {
           if(a[i]==a[j])
           {
               cout<<" "<<a[i];
           }
       }
   }
   return 0;
}
