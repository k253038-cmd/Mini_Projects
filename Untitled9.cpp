#include <stdio.h>
#include <stdlib.h> // for malloc and free

int main() {
    int n;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // exit program
    }

    // Initialize array elements
    for (int i = 0; i < n; i++) {
        *(arr + i) = i + 1; // example initialization: 1, 2, 3, ...
    }

    // Print the array
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

