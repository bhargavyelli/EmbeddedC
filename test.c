#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
/*
int main()
{
    int a = 10;
    void *ptr = &a;
    printf("%p\n",ptr);
    ptr++;
    printf("%p\n",ptr);
}*/

/*
int main()
{
    int arr1[10] = {1,2,3,4,5,6,7,8,9,1}, arr2[10]={0,9,8,7,6,5,4,3,2,1};

    int *ptr1 = arr1+5, *ptr2 = arr2+4;

    printf("%ld",ptr1-ptr2);
}*/

/*int main()
{
    char arr[] = "abcdef";
    char *p = arr + 3;
    printf("%c", *(p - 1));  
}*/

/*
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("%d",*(arr + *(arr + 2) / 10 - 1));
}*/

/*
int sift(int num,int n)
{
    return (num << n) | (num >> (32 - n));

}

int main()
{
    // int **arr = (int **)malloc(5*sizeof(int *));

    // arr[0] = (int *)(malloc(10*sizeof(int)));
    // arr[1] = (int *)(malloc(10*sizeof(int)));
    // arr[2] = (int *)(malloc(10*sizeof(int)));
    // arr[3] = (int *)(malloc(10*sizeof(int)));
    // arr[4] = (int *)(malloc(10*sizeof(int)));

    printf("%b",sift(0b10000000000000000001111100000,10));

}*/


/*
int main() {
    FILE *file;
    char line[500];
    char keyword[] = "script";
    int count = 0;

    file = fopen("file1.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        count++;
        if (strstr(line, keyword) != NULL) {
            printf("%d %s\n",count,line);
        }
        
    }

    fclose(file);

    printf("%d",count);

    return 0;
}*/
/*
int main()
{
    FILE *file;
    char line[100];


    file = fopen("file1.txt","a");

    fgets(line, sizeof(line), stdin);
    fputs(line,file);

    fclose(file);
}*/

/*
int main()
{
    FILE *fps,*fpd;
    char s[500];
    
    int count=0;
    fps = fopen("file1.txt","r");
    fpd = fopen("file2.txt","w+");

    while(fgets(s,sizeof(s),fps) != NULL)
    {
        fputs(s,fpd);
        
        
    }
    fclose(fps);
    fclose(fpd);
}*/


/*
int main()
{
    char file[] = "file2.txt";

    if(remove(file) == 0)
    {
        printf("File removed successfully");
    }
    else
    {
        printf("File No removed");
    }
    return 0;
}*/


//  multiply an integer by 10 using bitwise operator.
/*
int main()
{
    int a = 5;

    // int b = a<<1<<1;
    // b = b+a;
    // b = b<<1;


    int b = (a<<3) + (a << 1);

    printf("%d",b);
}*/


//  Remove duplicate words freom a sentence, keeping only the first occurence of each world
/* int main()
{
    char s[100];

    fgets(s,sizeof(s),stdin);

    char *str[20];
    int k=0;
    char *tok = strtok(s," ");
    while(tok != NULL)
    {
        str[k] = (char *)malloc(strlen(tok)+1);
        strcpy(str[k],tok);
        //str[k][strlen(tok)] = '\0';
        // printf("%s\n",tok);
        tok = strtok(NULL," \n");

        k++;
    }
    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if (strcmp(str[i], str[j]) == 0) {

            free(str[j]);   // free duplicate

            for (int p = j; p < k - 1; p++) {
                str[p] = str[p + 1];   // shift POINTERS
            }

            k--;
            j--; 
                
            }
        }
    }

    for(int i=0;i<k;i++)
    {
        printf("%s\n",str[i]);
        free(str[i]);
    }

}*/





// reverse every group of K words. If the last group has fewer than k words reverse those too.

/* void swap(char **s1,char **s2)
{
    //printf("%s %s\n",s1,s2);
    char *s3 = *s1;
    *s1 = *s2;
    *s2 = s3;
}

int main()
{
    char s[] = "one two three four five six seven eight nine ten eleven twelve";
    printf("%s\n",s);
    int n=4;

    char *str[20];
    int k=0;

    char *tok = strtok(s," \n");

    while(tok != NULL)
    {
        str[k] = malloc(strlen(tok)+1);

        strcpy(str[k],tok);

        tok = strtok(NULL," \n");
        k++;
    }
    //printf("235");

    int i=0;
    while(i*n+n <= k)
    {
        int m = i*n+n-1;
        int z = i*n;

        //printf("%d %d %d %d %d\n",z,m,i,n,k);

        while(z < m)
        {
            swap(&str[z],&str[m]);
            z++;
            m--;
        }
        i++;

        
    }

    if(i*n < k)
    {
        int m = k-1;
        int z = i*n;

        //printf("%d %d %d %d %d\n",z,m,i,n,k);

        while(z < m)
        {
            swap(&str[z],&str[m]);
            z++;
            m--;
        }
    }

    // printf("\n");
    for(int i=0;i<k;i++)
    {
        printf("%s ",str[i]);
        free(str[i]);
    }
    return 0;
}
*/


// generate all possible binary strings of length n using bitwise operations
int main()
{
    int n = 5;
    int count,d;
    int num = pow(2,n);
    for(int i=0;i<num;i++)
    {
        d = i;
        count = 0;
        while(count++ < n)
        {
            printf("%d",i&(1<<count)>>count);
        }
        printf(" ");
    }
}