#include<stdio.h>

void print(int *arr, int len)
{
    for(int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void sum(int *arr, int len)
{
    int sum = 0;
    for(int i = 0; i < len; i++)
        sum += arr[i];
    printf("sum is - %d\n", sum);
}

void max_min(int *arr, int len)
{
    int max = arr[0], min = arr[0];
    for(int i = 1; i < len; i++)
    {
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    printf("max is %d and min is %d\n", max, min);
}

void even_odd(int *arr, int len)
{
    int e_count = 0, o_count = 0;
    for(int i = 0; i < len; i++)
    {
        if(arr[i] % 2 == 0)
            e_count++;
        else
            o_count++;
    }
    printf("even count is %d and odd count is %d\n", e_count, o_count);
}

void copy(int *arr, int *c_arr, int len)
{
    for(int i = 0; i < len; i++)
        c_arr[i] = arr[i];
}

void search(int *arr, int len, int key)
{
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found at - %d\n", i + 1);
            return;
        }
    }
    printf("Element Not Found\n");
}

void swap(int *f, int *l)
{
    int dummy;
    dummy = *f;
    *f = *l;
    *l = dummy;
}

void reverse(int *arr, int len)
{
    int *f = arr, *l = arr + len - 1;
    while(f < l)
    {
        swap(f, l);
        f++;
        l--;
    }
}

void insert(int *arr, int *len, int pos, int val)
{
    for(int i = *len; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    (*len)++;
    printf("After inserting %d in %d position\n", val, pos);
    print(arr, *len);   
}

void delete(int *arr, int *len, int pos)
{
    for(int i = pos - 1; i < *len - 1; i++)
        arr[i] = arr[i + 1];
    (*len)--;
    printf("After deleting at position %d\n", pos);
    print(arr, *len);
}

void sort_asc(int *arr, int len)
{
    int temp;
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in ascending order: ");
    print(arr, len);
}

void sort_desc(int *arr, int len)
{
    int temp;
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in descending order: ");
    print(arr, len);
}

void merge_arrays(int *arr1, int len1, int *arr2, int len2)
{
    int merged[len1 + len2];
    int i = 0, j = 0, k = 0;
    
    while(i < len1 && j < len2)
    {
        merged[k++] = arr1[i++];
        merged[k++] = arr2[j++];
    }

    while(i < len1)
        merged[k++] = arr1[i++];
    
    while(j < len2)
        merged[k++] = arr2[j++];
    
    printf("Merged array: ");
    print(merged, len1 + len2);
}

void frequency(int *arr, int len)
{
    int visited[len];
    for(int i = 0; i < len; i++)
        visited[i] = 0;

    for(int i = 0; i < len; i++)
    {
        if(visited[i] == 1)
            continue;

        int count = 1;
        for(int j = i + 1; j < len; j++)
        {
            if(arr[i] == arr[j])
            {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
}

void remove_duplicates(int *arr, int *len)
{
    int new_len = *len;
    for(int i = 0; i < new_len; i++)
    {
        for(int j = i + 1; j < new_len; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < new_len - 1; k++)
                    arr[k] = arr[k + 1];
                new_len--;
                j--;
            }
        }
    }
    *len = new_len;
    printf("Array after removing duplicates: ");
    print(arr, *len);
}

void find_duplicates(int *arr, int len)
{
    int visited[len];
    for(int i = 0; i < len; i++)
        visited[i] = 0;

    printf("Duplicate elements: ");
    for(int i = 0; i < len; i++)
    {
        if(visited[i] == 1)
            continue;

        for(int j = i + 1; j < len; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                visited[j] = 1;
                break;
            }
        }
    }
    printf("\n");
}

void second_largest(int *arr, int len)
{
    int first, second;
    if(len < 2)
    {
        printf("Array has less than 2 elements.\n");
        return;
    }
    first = second = arr[0];
    for(int i = 1; i < len; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    printf("Second largest element is %d\n", second);
}

void max_min_diff(int *arr, int len)
{
    int max = arr[0], min = arr[0];
    for(int i = 1; i < len; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Difference between max and min is %d\n", max - min);
}

void left_rotate(int *arr, int len, int n)
{
    int temp[n];
    for(int i = 0; i < n; i++)
        temp[i] = arr[i];
    
    for(int i = 0; i < len - n; i++)
        arr[i] = arr[i + n];
    
    for(int i = 0; i < n; i++)
        arr[len - n + i] = temp[i];
    
    printf("Rotated array: ");
    print(arr, len);
}

void right_rotate(int *arr, int len, int n)
{
    int temp[n];
    for(int i = 0; i < n; i++)
        temp[i] = arr[len - n + i];
    
    for(int i = len - 1; i >= n; i--)
        arr[i] = arr[i - n];
    
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
    
    printf("Rotated array: ");
    print(arr, len);
}

void sum_even(int *arr, int len)
{
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    printf("Sum of even numbers: %d\n", sum);
}

void count_primes(int *arr, int len)
{
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        int prime = 1;
        if(arr[i] <= 1)
            prime = 0;
        for(int j = 2; j * j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\nCount of primes: %d\n", count);
}

void count_duplicates(int *arr, int len)
{
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total duplicate elements: %d\n", count);
}

void split_array(int *arr, int len)
{
    int mid = len / 2;
    printf("First half: ");
    for(int i = 0; i < mid; i++)
        printf("%d ", arr[i]);
    printf("\nSecond half: ");
    for(int i = mid; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void segregate_even_odd(int *arr, int len)
{
    int even[len], odd[len], e_count = 0, o_count = 0;
    for(int i = 0; i < len; i++)
    {
        if(arr[i] % 2 == 0)
            even[e_count++] = arr[i];
        else
            odd[o_count++] = arr[i];
    }

    printf("Even numbers: ");
    for(int i = 0; i < e_count; i++)
        printf("%d ", even[i]);
    printf("\nOdd numbers: ");
    for(int i = 0; i < o_count; i++)
        printf("%d ", odd[i]);
    printf("\n");
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6};
    int len = 6;
    int c_arr[len];

    print(arr, len);
    sum(arr, len);
    max_min(arr, len);
    even_odd(arr, len);
    copy(arr, c_arr, len);
    print(c_arr, len);
    search(arr, len, 2);
    reverse(arr, len);
    printf("After reversing array ");
    print(arr, len);
    reverse(arr, len);
    insert(arr, &len, 2, 30);
    delete(arr, &len, 2);
    sort_asc(arr, len);
    sort_desc(arr, len);

    int arr2[3] = {7, 8, 9};
    merge_arrays(arr, len, arr2, 3);

    frequency(arr, len);
    remove_duplicates(arr, &len);
    find_duplicates(arr, len);
    second_largest(arr, len);
    max_min_diff(arr, len);
    left_rotate(arr, len, 2);
    right_rotate(arr, len, 2);
    sum_even(arr, len);
    count_primes(arr, len);
    count_duplicates(arr, len);
    split_array(arr, len);
    segregate_even_odd(arr, len);

    return 0;
}
