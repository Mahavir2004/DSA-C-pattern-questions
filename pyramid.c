#include <stdio.h>

int main(){
int n,k;
printf("Enter a number: ");
scanf("%d", &n);
printf("Enter the 2nd number: ");
scanf("%d", &k);
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= k ; j++)
    {
        if (i==3|| j==2|| j==3|| j||4|| i==3)
        {
           printf("* ");
        }
         else{
            printf("  ");
         }
         printf("\n");
        
    }
    
}

     return 0;
}