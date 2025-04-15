#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // outerloops  signifies the number of rows
    {
        for (int i = 1; i <=n; i++) // inner loop signifies the number of columns 
        {
           printf("* ");
        }
        printf("\n");
    }
   
    
    
     return 0;
}