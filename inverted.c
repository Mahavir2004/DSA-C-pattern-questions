#include <stdio.h>

int main(){
int n;
printf("Enter a number: ");
scanf("%d", &n);
for (int i = 0; i <= n+1; i++)
{
   for (int j = n-1; j >= i; j--)
   {
    printf("* ");
   }
   printf("\n");
}

     return 0;
}