#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first = n/1000; // for last thke digit soray and firste thke sorate hole mod korbo jotota digit sorabo tototha zero diye.

                        
     if(first %2 == 0)   
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}