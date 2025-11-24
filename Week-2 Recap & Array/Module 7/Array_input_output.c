#include <stdio.h>
int main()
{
    int arr[5];
    // scanf("%d %d %d %d %d", &arr[0], &arr[2], &arr[3]);
    // printf("%d %d %d %d", arr[0], arr[2], arr[3]);
    for(int i=0;i<5;i++)
    {

        scanf("%d",&arr[i]);
    }
     for(int i=0;i<5;i++)
    {

        printf("a[%d]\n",arr[i]);
    }

    return 0;
}