#include<stdio.h>
#include<string.h>
void mem_cpy(void *dst,void *src,size_t n)
{
    int *d=(int *)dst;
    int *s=(int *)src;
    for(int i=0;i<n;i++)
    {
        *(d+i)=*(s+i);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mem_cpy(arr1,(arr+2),n);
    printf("Array after copying:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    return 0;
}
