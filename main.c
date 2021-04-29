#include "algorithm.h"
#include <stdio.h>

void printArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int i;
    int v1[] = {5, 1, 4, 2, 3};
    int v2[] = {5, 1, 4, 2, 3};
    
    insertionsort(v1, 5);
    quicksort(v2, 0, 4);
    
    printArray(v1, 5);
    printArray(v2, 5);
    return 0;
}
