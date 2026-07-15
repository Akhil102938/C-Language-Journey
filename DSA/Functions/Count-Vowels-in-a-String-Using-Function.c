#include<stdio.h>

int countVowels(char str[], int n)
{
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }

    printf("No. of vowels = %d", count);

    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    countVowels(str, 100);

    return 0;
}
