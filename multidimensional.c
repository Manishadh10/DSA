#include<stdio.h>
int main() 
{
     int i, j;
    int a[3][3] = { {1, 3, 5},{2, 4, 6 },{7, 8, 9}};
    printf("The elements of the 2D array are:\n");
    for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
    printf("%d ", a[i][j]);
    }
    printf("\n"); 
    }
    return 0;
}
