#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
    int len = 7 , val ,k = 3;
    while(k--)
    {
        val = arr[len-1];
        for(int i=len-1;i>0;i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = val;
    }

    for(int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
}

