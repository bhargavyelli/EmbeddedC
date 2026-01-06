#include<stdio.h>

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 1, 1, 0};
    
    int len = 8,l,h,max=0,count=0,i;
    for(int j=0;j<len;j++){
        count=0;
    for(i=j;i<len;i++)
    {
        printf("%d %d\n",arr[i],arr[i+1]);
        if(arr[i]!=arr[i+1])
        {
            count++;
            if(count > max)
            {
                max = count;
                l = j;
                h = h+1;
            }
        }
        
    }
}
    
printf("\n %d \n",max);
    for(int k=l;k<h;k++)
    {
        printf("%d ",arr[k]);
    }


}

