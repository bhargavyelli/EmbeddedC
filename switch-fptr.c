#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;1
}
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}


int main()
{
    int (*fptr[4])(int,int);

    fptr[0] = add;
    fptr[1] = sub;
    fptr[2] = mul;
    fptr[3] = div;

    int a = 6,b = 3;

    for(int i=0;i<4;i++)
    {
        printf("%d\n",fptr[i](a,b));
    }
    return 0;
}