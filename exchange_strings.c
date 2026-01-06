#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "world";
    int len = strlen(str1);
    strcat(str1,str2);
    printf("%s\n",str2);

    // strncpy(str2,str1,len);

    // printf("%s",str1);


}