#include <stdio.h>

int main(){
int n;
printf("Enter a number: ");
scanf("%d", &n);
for (int i = 1; i < n+1; i++)
{
    for (int j = 1; j <=i ; j++)
    {
       printf("%d ",j);
    }
    printf("\n");
}

     return 0;
}