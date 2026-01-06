#include<stdio.h>

int main()
{
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};
    int len1 = 4,len2 = 4;

    int n = len1 + len2;
    int new_arr[n];
    int i=0,j=0,k=0;
    while(i<len1 && j<len2)
    {
        if(arr1[i] < arr2[j])
        {
            new_arr[k++] = arr1[i];
            i++;
        }
        else if(arr1[i] > arr2[j])
        {
            new_arr[k++] = arr2[j];
            j++;
        }
        else{
            j++;
            i++;
        }
    }

    while(i<len1)
    {
        new_arr[k++] = arr1[i];
        i++;
    }

    for(int i=0;i<k;i++)
    {
        printf("%d",new_arr[i]);
    }
    }

