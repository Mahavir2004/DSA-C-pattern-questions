#include <stdio.h>

int main(){
    int n = 4;
    
    for (int i = 1; i < n+1; i++) // loop through each row
    {
       for (int j = 1; j < n+1; j++){ // loop through each column
        printf("%d ",j);
       }
       printf("\n");
    }
    
     return 0;
}