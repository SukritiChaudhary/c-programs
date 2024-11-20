#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    for (int i = 0; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array elements are:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
