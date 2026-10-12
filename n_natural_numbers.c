#include<stdio.h>
 int main() {
 int n,i;

 printf("Enter n: ");
 scanf("%d",&n);

 printf("First natural numbers are:\n", n);
 for (i=1;i<=n;i++)
 {
 printf("%d ",i);
 }
 return 0;
 }
