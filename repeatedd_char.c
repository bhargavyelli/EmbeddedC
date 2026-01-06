#include<stdio.h>
#include<string.h>
#include "repeated.h"

void fun(char *str)
{
    int k=0;
    while(k<strlen(str)-1){
    for(int i=k+1;i<=strlen(str);i++)
    {
        if(str[k] == str[i])
        {
            for(int j=i;j<=strlen(str);j++)
            {
                str[j] = str[j+1];
            }
            i = i-1;
        }
    }
    k++;
    
    }
}
// int main()
// {
//     char str[] = "embedded";
//     fun(str);
//     printf("%s\n",str);

// }