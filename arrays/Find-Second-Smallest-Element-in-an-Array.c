#include<stdio.h>
int main()
{
int a[5]={10,5,20,3,8};
int i,sn;
int ssn;
sn=a[0];
  for(i=1;i<5;i++)
  {
      if(a[i]<sn)
      {
         sn=a[i];
      }
  }
  printf("first smallest no. :- %d\n",sn);
  ssn=a[0];
  for(i=1;i<5;i++)
  {
      if(a[i] !=sn && a[i]<ssn)
      {
          ssn=a[i];
      }
  }
  printf("Second smallest number:- %d",ssn);
  return 0;
}
