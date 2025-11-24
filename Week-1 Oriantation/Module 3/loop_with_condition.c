#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i+=2)
    {
        if (i % 2 == 0)
        {
            printf("%d- EVEN NUMBER\n",i);
        }

        else
        {
            printf("%d- ODD NUMVER\n",i);
        }
    }
    return 0;
}