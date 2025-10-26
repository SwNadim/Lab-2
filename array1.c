#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int x, y;
    printf("Enter size: ");
    scanf("%d", &y);

    for(x=0; x<y; x++)
    printf("Enter %d elements: ",y );
    {
    for(x=0; x<y; x++)
        scanf("%d", &arr[x]);
    }

    printf("\nElements in array are: ");
    for(x=0; x<y; x++)
    {
        printf("%d, ", arr[x]);
    }

return 0;}
