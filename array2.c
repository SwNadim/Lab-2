#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int x, y, sum=0;

    printf("Enter size of the array: ");
    scanf("%d", &y);

    printf("Enter %d elements in the array: ", y);
    for(x=0; x<y; x++)
    {
        scanf("%d", &arr[x]);
    }

    for(x=0; x<y; x++)
    {
        sum = sum + arr[x];
    }


    printf("Sum of all elements of array = %d", sum);

    return 0;
}
