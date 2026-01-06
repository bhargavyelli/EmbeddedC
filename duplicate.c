#include<stdio.h>

int main()
{
    int arr[] = {1,5,7,-1,5};
    
    int len = 5 , val = 6 ,count=0;

    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d",arr[i]);
            }
        }
    }
}

