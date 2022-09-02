#include<stdio.h>
int main()
{
    int arr[50];
    int i,n,size;
    printf("input array size:");
    scanf("%d",&size);
    printf("input array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
