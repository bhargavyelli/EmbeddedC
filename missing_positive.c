#include<stdio.h>

int main()
{
    int arr[] = {3, 4, -1, 2};
    
    int len = 4,sum=0,min=arr[0],max=arr[0];

    for(int i=0;i<len;i++)
    {
        
        if(arr[i]>0)
        {
            if(arr[i]<min)
            {
                min = arr[i];
            }
            else
            {
                max = arr[i];
            }
                sum += arr[i];
        }

    }
    
    int n_sum = (max*(max+1))/2;

    printf("%d",n_sum-sum);



}

