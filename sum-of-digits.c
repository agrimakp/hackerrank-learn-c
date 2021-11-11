#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int temp = n;
    int sum = 0, number;
    while(temp > 0){ 
        number = temp % 10;
        sum = sum + number;
        temp = temp/10;
    }
    printf("%d", sum);
    
    
    return 0;
}
