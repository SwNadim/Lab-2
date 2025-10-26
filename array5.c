#include<stdio.h>
int main(){

    int x;
    printf("Enter size of array : ");
    scanf("%d",&x);

    int arr[x],y,terget,check=0;
    printf("Enter elements of Array : ");

    for(y=0;y<x;y++){
        scanf("%d",&arr[y]);
    }
    printf("Enter terget number : ");
    scanf("%d",&terget);

    for(y=0;y<x;y++){
        if(arr[y]==terget){
            check=1;
            break;
        }
    }

    if(check==1){
        printf("Found in index %d",y+1);
    }
    else{
        printf("Not fdound");
    }
    return 0;
}
