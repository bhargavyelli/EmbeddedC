#include <stdio.h>

void pointer_Increment() {
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;
    ptr += 2;
    printf("Third element is %d\n", *ptr);
}

void pointer_Addition() {
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;
    ptr = ptr + 4;
    printf("Last element is %d\n", *ptr);
}

void pointer_Subtraction() {
    int arr[] = {2, 4, 6, 8, 10};
    int *p1 = &arr[4];
    int *p2 = &arr[1];
    int distance = p1 - p2;
    printf("Distance between pointers is %d\n", distance);
}

void pointer_Comparison() {
    int arr[] = {11, 22, 33, 44, 55};
    int *ptr1 = &arr[2];
    int *ptr2 = &arr[4];
    if (ptr1 < ptr2)
        printf("Pointer ptr1 points to an earlier element than ptr2\n");
    else
        printf("Pointer ptr2 points to an earlier element than ptr1\n");
}

void Traverse_Array() {
    int arr[] = {100, 200, 300, 400};
    int *ptr = arr;
    int i;
    for (i = 0; i < 4; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

void reverseArray(int *start, int *end) {
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void question9() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    reverseArray(arr, arr + size - 1);
    int *ptr = arr;
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main() {
    pointer_Increment();
    pointer_Addition();
    pointer_Subtraction();
    pointer_Comparison();
    Traverse_Array();
    question9();

    return 0;
}
