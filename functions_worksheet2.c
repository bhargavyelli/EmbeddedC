#include <stdio.h>

int fib(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else
    {
        return fib(num-1) + fib(num-2);
    }
}

int sum_of_digits(int num)
{
    if(num>0)
    {
        return num%10 + sum_of_digits(num/10);
    }
    return 0;
}

int count_zeroes(int num)
{
    if(num>0)
    {
        if(num%10 == 0)
        {
            return 1+count_zeroes(num/10);
        }
        else
        {
            return count_zeroes(num/10);
        }
    }
    return 0;
}

int str_len(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1+str_len(str+1);
    }
}

int print(int num)
{
    if(num > 0)
    {
        printf("%d ",num);
        return print(num-1);
    }
    return 0;
}

int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else if(b == 1)
    {
        return a;
    }
    else
    {
        return a*(power(a,b-1));
    }
}
int main()
{
    int n = 8;
    for(int i=0;i<n;i++)
    printf("%d ",fib(i));
    printf("\n");
    n=8244;
    printf("%d\n",sum_of_digits(n));

    n = 102030400;
    printf("%d\n",count_zeroes(n));
    
    char s[] = "bhargav";
    printf("%d\n",str_len(s));
    
    n=9;
    print(n);
    printf("\n");
    
    printf("%d\n",power(2,4));
    return 0;
}