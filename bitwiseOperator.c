#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int max(int a, int b){
    
    return a<b ? b : a;
}

void calculate_the_maximum(int n, int k) {
    
int maxaAndb = 0, maxaOrb =0, maxaXoRb = 0;
  for (int a = 1; a <= n; a++) {
      
       for (int b = a+1; b <= n; b++) {
           
            int aAndb = a & b;
            int aOrb = a | b;
            int aXoRb = a ^ b;
            
            if(aAndb < k){
                
                maxaAndb = max(aAndb,maxaAndb);
               
            } 
             if (aOrb < k) {
                maxaOrb  = max(aOrb, maxaOrb);
                
            } 
            if (aXoRb < k) {
                maxaXoRb = max(aXoRb, maxaXoRb);
            }
       }
       
  }
  
  
  printf("%d\n%d\n%d", maxaAndb, maxaOrb,maxaXoRb);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
 
    return 0;
}
