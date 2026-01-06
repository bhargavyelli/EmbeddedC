#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "aaabbc";
    int count=0,k=0;
    char u_str[2*strlen(str)+1];
    
    for(int i=0;i<strlen(str);i++)
    {
        u_str[k++] = str[i];
        count = 1;
        if(str[i] == str[i+1])
        {
            int j=i+1;
            while(j<strlen(str) && str[j] == str[i])
            {
                count++;
                j++;
            }
            i = j-1;
        }
        u_str[k++] = '0'+count;
    }
    u_str[k] = '\0';
    printf("%s",u_str);
}