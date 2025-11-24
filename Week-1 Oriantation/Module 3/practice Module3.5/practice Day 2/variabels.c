#include<stdio.h>
int main()
{
int a;
long long int b;
float f;
char c;
scanf("%d %lld %f %c",&a,&b,&f,&c);
printf("%d\n%lld\n%.2f\n%c\n",a,b,f,c);
return 0;
}