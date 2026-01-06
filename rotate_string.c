#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "abcd";
    char s2[] = "cdab";

    char temp[200];
    strcat(temp,s1);
    strcat(temp,s1);
    
    printf("%s",strstr(temp,s2));
 }