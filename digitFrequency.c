#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Read input from STDIN. Print output to STDOUT */  
    char num[100];
    scanf("%[^\n]%*c", &num);  
    int length = strlen(num);
    int counter[10] = {0};

    for (int  i = 0; i < length; i++)
    {
      if(num[i] >= '0' && num[i] <= '9'){
          int index = (int) num[i] - '0';
          counter[index]++;
      }
        
    }
   
    for (int i = 0; i < 10; i++)
    {
       printf("%d ",counter[i]);
    }
    
    
    return 0;
}
