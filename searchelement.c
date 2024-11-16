#include <stdio.h>
int main() {
    int n, i, man, find = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &man);
    for (i = 0; i < n; i++) {
        if (arr[i] == man) {
            find = 1;
            break;
        }
    }
    if (find) {
        printf("Element %d found at position %d.\n", man, i + 1);
    } else {
        printf("Element %d not found in the array.\n", man);
    }
    return 0;
}
