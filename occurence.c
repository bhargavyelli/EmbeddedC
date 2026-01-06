#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "the sky is the limit in the sky";
    char str2[] = "the";

    int count = 0;
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i] == str2[0])
        {
            int k = i;
            count = 1;
            for(int j=1;j<strlen(str2);j++)
            {
                if(str1[++i] == str2[j])
                {
                    count++;
                }
            }
            if(count == strlen(str2))
            {
                printf("%d ", k);
            }
        }

    }


}