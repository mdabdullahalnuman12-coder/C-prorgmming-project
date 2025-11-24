// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     int found;
//     scanf("%d", &found);
//     int position = -1;
//     for (int i = 0; i < N; i++)
//     {
//         if (A[i] == found)
//         {
//             position = i;
//             break;
//         }
//     }
//     printf("%d\n", position);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int found;
    scanf("%d", &found);
    int position = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == found)
        {
            position = i;
            break;
        }
    }
    printf("%d", position);
        
    return 0;
}