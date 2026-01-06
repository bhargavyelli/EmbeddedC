#include <stdio.h>
#include<stdlib.h>

void union_arrays(int a[], int n, int b[], int m)
{
    int i, j, flag;
    printf("Union: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    for(i = 0; i < m; i++)
    {
        flag = 0;
        for(j = 0; j < n; j++)
        {
            if(b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", b[i]);
    }
    printf("\n");
}


void intersection_arrays(int a[], int n, int b[], int m)
{
    printf("Intersection: ");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");
}

void difference_arrays(int a[], int n, int b[], int m)
{
    int flag;
    printf("Difference: ");
    for(int i = 0; i < n; i++)
    {
        flag = 0;
        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", a[i]);
    }
    printf("\n");
}

void palindrome_array(int arr[], int n)
{
    int i, flag = 1;
    for(i = 0; i < n / 2; i++)
    {
        if(arr[i] != arr[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Array is palindrome\n");
    else
        printf("Array is not palindrome\n");
}

void count_pairs(int arr[], int n, int sum)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
                count++;
        }
    }
    printf("Number of pairs: %d\n", count);
}

void missing_number(int arr[], int n)
{
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];

    printf("Missing number is: %d\n", total - sum);
}

void majority_element(int arr[], int n)
{
    int count;
    for(int i = 0; i < n; i++)
    {
        count = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > n / 2)
        {
            printf("Majority element: %d\n", arr[i]);
            return;
        }
    }
    printf("No majority element\n");
}

void max_subarray_sum(int arr[], int n)
{
    int max_sum = arr[0], curr_sum = arr[0];
    for(int i = 1; i < n; i++)
    {
        curr_sum = (arr[i] > curr_sum + arr[i]) ? arr[i] : curr_sum + arr[i];
        max_sum = (curr_sum > max_sum) ? curr_sum : max_sum;
    }
    printf("Maximum contiguous sum is %d\n", max_sum);
}

void leader_elements(int arr[], int n)
{
    int max = arr[n - 1];
    printf("Leader elements: %d ", max);
    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            printf("%d ", max);
        }
    }
    printf("\n");
}

void equilibrium_index(int arr[], int n)
{
    int total = 0, left = 0;
    for(int i = 0; i < n; i++)
        total += arr[i];

    for(int i = 0; i < n; i++)
    {
        total -= arr[i];
        if(left == total)
        {
            printf("Equilibrium index is %d\n", i);
            return;
        }
        left += arr[i];
    }
    printf("No equilibrium index\n");
}

void second_smallest(int arr[], int n)
{
    int min = arr[0], second = __INT_MAX__;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            second = min;
            min = arr[i];
        }
        else if(arr[i] < second && arr[i] != min)
            second = arr[i];
    }
    printf("Second smallest element is %d\n", second);
}

void is_subset(int a[], int n, int b[], int m)
{
    int found;
    for(int i = 0; i < m; i++)
    {
        found = 0;
        for(int j = 0; j < n; j++)
        {
            if(b[i] == a[j])
            {
                found = 1;
                break;
            }
        }
        if(!found)
        {
            printf("Array2 is NOT a subset of Array1\n");
            return;
        }
    }
    printf("Array2 is a subset of Array1\n");
}

void sort_012(int arr[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0) c0++;
        else if(arr[i] == 1) c1++;
        else c2++;
    }

    int i = 0;
    while(c0--) arr[i++] = 0;
    while(c1--) arr[i++] = 1;
    while(c2--) arr[i++] = 2;

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void product_array(int arr[], int n)
{
    int prod = 1;
    for(int i = 0; i < n; i++)
        prod *= arr[i];
    printf("Product: %d\n", prod);
}

void max_difference(int arr[], int n)
{
    int min = arr[0], diff = arr[1] - arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] - min > diff)
            diff = arr[i] - min;
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Maximum difference: %d\n", diff);
}

void min_max(int arr[], int n)
{
    int min = arr[0], max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
        else if(arr[i] > max)
            max = arr[i];
    }
    printf("Minimum element is %d Maximum element is %d\n", min, max);
}

void count_occurrence(int arr[], int n, int key)
{
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            count++;
    printf("Number %d occurs %d times\n", key, count);
}

void closest_sum_zero(int arr[], int n)
{
    int min_sum = abs(arr[0] + arr[1]);
    int x = arr[0], y = arr[1];

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int sum = abs(arr[i] + arr[j]);
            if(sum < min_sum)
            {
                min_sum = sum;
                x = arr[i];
                y = arr[j];
            }
        }
    }
    printf("Pair closest to zero: %d %d\n", x, y);
}

void rearrange_pos_neg(int arr[], int n)
{
    int temp[n], k = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] < 0)
            temp[k++] = arr[i];

    for(int i = 0; i < n; i++)
        if(arr[i] >= 0)
            temp[k++] = arr[i];

    printf("Rearranged array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);
    printf("\n");
}

void move_zeros(int arr[], int n)
{
    int k = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[k++] = arr[i];

    while(k < n)
        arr[k++] = 0;

    printf("Output: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void frequency_elements(int arr[], int n)
{
    int visited[n];
    for(int i = 0; i < n; i++)
        visited[i] = 0;

    for(int i = 0; i < n; i++)
    {
        if(visited[i]) continue;
        int count = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d: %d ", arr[i], count);
    }
    printf("\n");
}

void max_sum_k(int arr[], int n, int k)
{
    int sum = 0;
    for(int i = 0; i < k; i++)
        sum += arr[i];

    int max_sum = sum;
    for(int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        if(sum > max_sum)
            max_sum = sum;
    }
    printf("Maximum sum of %d consecutive elements: %d\n", k, max_sum);
}

/* 48. Rotate array right by k */
void rotate_right(int arr[], int n, int k)
{
    k %= n;
    int temp[k];
    for(int i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    for(int i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    for(int i = 0; i < k; i++)
        arr[i] = temp[i];

    printf("Rotated array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void longest_consecutive(int arr[], int n)
{
    int max_len = 1, curr = 1;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i - 1] + 1)
            curr++;
        else
            curr = 1;

        if(curr > max_len)
            max_len = curr;
    }
    printf("Longest consecutive sequence length: %d\n", max_len);
}

void two_missing(int arr[], int n)
{
    int total = (n + 2) * (n + 3) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];

    int missing_sum = total - sum;
    int avg = missing_sum / 2;

    int sum1 = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] <= avg)
            sum1 += arr[i];

    int total1 = avg * (avg + 1) / 2;
    printf("Missing numbers: %d %d\n", total1 - sum1, missing_sum - (total1 - sum1));
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    union_arrays(a, 4, b, 4);
    intersection_arrays(a, 4, b, 4);
    difference_arrays(a, 4, b, 4);

    int pal[] = {1, 2, 3, 2, 1};
    palindrome_array(pal, 5);

    int pair_arr[] = {1, 5, 7, -1, 5};
    count_pairs(pair_arr, 5, 6);

    int miss[] = {1, 2, 4, 5, 6};
    missing_number(miss, 5);

    int maj[] = {2, 2, 1, 2, 3, 2, 2};
    majority_element(maj, 7);

    int kad[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    max_subarray_sum(kad, 8);

    int lead[] = {16, 17, 4, 3, 5, 2};
    leader_elements(lead, 6);

    int eq[] = {-7, 1, 5, 2, -4, 3, 0};
    equilibrium_index(eq, 7);

    int arr1[] = {12, 13, 1, 10, 34, 1};
    second_smallest(arr1, 6);

    int x[] = {1, 2, 3, 4, 5};
    int y[] = {2, 4, 5};
    is_subset(x, 5, y, 3);

    int arr2[] = {0,1,2,0,1,2,1,0};
    sort_012(arr2, 8);

    int arr3[] = {1,2,3,4};
    product_array(arr3, 4);

    int arr4[] = {2,3,10,6,4,8,1};
    max_difference(arr4, 7);

    int arr5[] = {1000,11,445,1,330,3000};
    min_max(arr5, 6);

    int arr6[] = {1,2,3,2,2,5};
    count_occurrence(arr6, 6, 2);

    int arr7[] = {1,60,-10,70,-80,85};
    closest_sum_zero(arr7, 6);

    int arr8[] = {1,2,3,-4,-1,4};
    rearrange_pos_neg(arr8, 6);

    int arr9[] = {1,0,2,0,0,3,4};
    move_zeros(arr9, 7);

    int arr10[] = {10,20,10,30,20,20,10,10};
    frequency_elements(arr10, 8);

    int arr11[] = {2,3,4,1,5,6,7};
    max_sum_k(arr11, 7, 3);

    int arr12[] = {1,2,3,4,5};
    rotate_right(arr12, 5, 2);

    int arr13[] = {1,2,3,4};
    longest_consecutive(arr13, 4);

    int arr14[] = {1,2,4,6};
    two_missing(arr14, 4);

    return 0;
}
