#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int limit;
    scanf("%d", &limit);
    int  arr[limit], sum=0;  
    
    for  (int i=0; i<limit; i++) {
       scanf("%d", &arr[i]);
    }
    
    for  (int j=0; j<limit; j++) {
       sum += arr[j];
    }  
     printf("%d", sum);
   
    
    return 0;
}
