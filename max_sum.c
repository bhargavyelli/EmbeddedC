#include<stdio.h>

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, 2, 5, -5, 4};
    
    int len = 11,l,h,max=0,count=0,i,sum=0;
    for(int j=0;j<len;j++){
        sum=0;
        for(i=j;i<len;i++)
        {
            sum += arr[i];
            if(sum > max)
            {
                max = sum;
                l = j;
                h = i+1;
            }
        }   
}
    
printf("\n %d \n",max);
    for(int k=l;k<h;k++)
    {
        printf("%d ",arr[k]);
    }


}

