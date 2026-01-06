#include<stdio.h>

void print(int *arr,int len)
{
    for(int i=0;i<len;i++)
    printf("%d ",arr[i]);
    printf("\n");
}

void sum(int *arr, int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    sum += arr[i];

    printf("sum is - %d\n",sum);
}

void max_min(int *arr, int len)
{
    int max=arr[0],min = arr[0];

    for(int i=1;i<len;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("max is %d and min is %d\n",max,min);
}

void even_odd(int *arr, int len)
{
    int e_count=0,o_count=0;

    for(int i=0;i<len;i++)
    {
        if(arr[i]%2==0)
        {
            e_count++;
        }
        else
        {
            o_count++;
        }
    }

    printf("even count is %d and odd count is %d\n",e_count,o_count);
}

void copy(int *arr,int *c_arr,int len)
{
    for(int i=0;i<len;i++)
        c_arr[i] = arr[i];
}
void search(int *arr,int len,int key)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found at - %d\n",i+1);
            return;
        }
    }
    printf("Element Not Found\n");
}
void swap(int *f,int *l)
{
    int dummy;
    
    dummy = *f;
    *f = *l;
    *l = dummy;
}
void reverse(int *arr,int len)
{
    int *f=arr,*l = arr+len-1;
    int dummy;
    while(f<l)
    {
        swap(f,l);
        f++;
        l--;
    }
}

void insert(int *arr,int *len,int pos,int val)
{
    int i;
    for(int i=*len;i>=pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    *len+=1;
    printf("After insterting %d in %d position\n",val,pos);
    print(arr,*len);   
}
int main()
{
    int arr[7] = {1,2,3,4,5,6};
    int len = 6;
    int c_arr[len];

    print(arr,len);
    sum(arr,len);
    max_min(arr,len);
    even_odd(arr,len);
    copy(arr,c_arr,len);
    print(c_arr,len);
    search(arr,len,2);
    reverse(arr,len);
    printf("After reversing array ");
    print(arr,len);
    reverse(arr,len);
    insert(arr,&len,2,30);
    return 0;
}