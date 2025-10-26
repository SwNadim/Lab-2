#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE], size, x;
    int max1, max2;

    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    printf("Enter elements in the array: ");
    for(x=0; x<size; x++)
    {
        scanf("%d", &arr[x]);
    }

    max1 = max2 = INT_MIN;

    for(x=0; x<size; x++)
    {
        if(arr[x] > max1)
        {
            max2 = max1;
            max1 = arr[x];
        }
        else if(arr[x] > max2 && arr[x] < max1)
        {

            max2 = arr[x];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}
