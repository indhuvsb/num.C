#include<stdio.h>
#include<conio.h>
int main()
{
char[20];
int count0,i;
printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
     if (s[i] == 'i')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
    return 0;
}
