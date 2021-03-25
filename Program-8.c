//WAP to concatenate two strings and find the length of resultant string.
#include<stdio.h>
int main()
{
    char str1[50], str2[50], str3[50];
    int i=0, j=0;
    printf("\nEnter first string:\n");
    gets(str1);
    fflush(stdin);
    printf("\nEnter second string:\n");
    gets(str2);
    fflush(stdin);
    while(str1[i]!='\0')
    {
        str3[i]=str1[i];
        i++;
    }
    str3[i]=" ";
    i++;
    while(str2[j]!='\0')
    {
        str3[i]=str2[j];
        i++;
        j++;
    }
    fflush(stdin);
    str3[i]="\0";
    printf("\nThe concatenated string is:\n%s", str3);
    printf("\nThe length is:%d",i);
    return 0;
}
