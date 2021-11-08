#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100], sen[200];
    scanf("%[^\n]%*c", &ch);
    scanf("%[^\n]%*c", &s);
    scanf("%[^\n]%*c", &sen); 

    printf("%c\n", ch);
    printf("%s\n", s);
    printf(sen);
    return 0;
}
