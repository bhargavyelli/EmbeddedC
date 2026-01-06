#include<stdio.h>
#include<string.h>
#include "repeated.h"

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    { 
        return n*fact(n-1);
    }
}

void alpha(int *arr,char *str,int *sum)
{
    *sum=1;
    for(int i=0;i<26;i++)
    arr[i] = 0;

    for(int i=0;i<strlen(str);i++)
    {
        arr[str[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(arr[i] > 1)
        {
            *sum *= fact(arr[i]);
        }
    }
}



int main()
{
    char str[] = "bhargav";
    int arr[26] = {0},count=0,sum=0,mul=1;


    for(int i=0;i<strlen(str);i++)
    {
        count=0;
        for(int j=i+1;j<strlen(str);j++)
        {
            if(str[i] > str[j])
            {
                count++;
            }
        }
        alpha(arr,str,&mul);
        sum += count*(fact((strlen(str)-1-i))/mul);
        // printf("%d ",sum);
    }

    printf("%d",sum+1);

}