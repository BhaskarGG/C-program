#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the numbers obtained by the three students");
scanf("%f %f %f", &a, &b, &c);
a>b? a>c? printf("%g is greatest",a):a:
b>a? b>c? printf("%g is greatest",b):b:
c>a? c>b? printf("%g is the greatest",c):c:c;
return 0;
}
