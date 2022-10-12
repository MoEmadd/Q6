#include <stdio.h>
int func(int arr[],int n,int o);
int main()
{
    int p,o,n;
    printf("Enter the number of array number : ");
    scanf("%d",&p);
    int a[p];
    for(int i=0;i<p;i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Please enter the old value to replace it  : ");
    scanf("%d",&o);
    printf("Please enter the new value  : ");
    scanf("%d",&n);
    printf("%d", func(a,n, o));
     printf("The array after modification \n ");
    for(int i=0 ; i<p;i++)
    {

        printf("%d ",a[i]);
    }
    return 0;
}
int func(int arr[],int n,int o)
{
    int count;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==o)
        {
            arr[i]=n;
            count++;
        }

    }
    return count;
}
