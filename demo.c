#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char s[100];
char sen[100];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    gets(sen);
    scanf("%c",&ch);
    scanf("%s",&s);  
    
    printf("%c\n",ch);
    printf("%s\n",&s);
    
    printf("%s\n",sen);
    
    return 0;
}
