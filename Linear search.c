#include<stdio.h>
int main()
{
    int n,f,a[100],flag=0,i;
    printf("Array size:\n");
    scanf("%d",&n);
     printf("input elements:\n");
    for(i=0 ;i<n ;++i)
    {

        scanf("%d\n",&a[i]);
    }
    for(i=0;i<n ;i++){
        printf("%d ",a[i]);
    }
    printf("The element you wanna search:\n");
    scanf("%d",&f);
    for(i=0 ; i<n ; i++)
    {
        if(a[i]==f)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found,position%d \n",i+1);
    }
    else{
        printf("No element available\n");
    }
    return 0;
}
