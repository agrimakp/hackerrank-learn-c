#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int limit,i,j;
    int  arr[10], sum=0;  
    scanf("%d", &limit);
    
    for  (i=0; i<limit; i++) {
       scanf("%d", &arr[i]);
    }
    
    for  (j=0; j<limit; j++) {
       sum += arr[j];
    }  
     printf("%d", sum);
   
    
    return 0;
}
