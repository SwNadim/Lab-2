#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int source[MAX_SIZE], dest[MAX_SIZE];
    int x, size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter elements of source array : ");
    for(x=0; x<size; x++)
    {
        scanf("%d", &source[x]);
    }

    for(x=0; x<size; x++)
    {
        dest[x] = source[x];
    }

    printf("\nElements of source array are : ");
    for(x=0; x<size; x++)
    {
        printf("%d\t", source[x]);
    }

    printf("\nElements of dest array are : ");
    for(x=0; x<size; x++)
    {
        printf("%d\t", dest[x]);
    }

    return 0;
}
