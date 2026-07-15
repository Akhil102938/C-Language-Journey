#include<stdio.h>

int isPalindrome(int a[], int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[5] = {1,2,3,2,1};
   if(isPalindrome(a,5)==1)
    {
        printf("it's Palindrome");
    }
    else
    {
        printf("it's not a Palindrome");
    }
    return 0;
}
