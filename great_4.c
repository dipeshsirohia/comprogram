# include <stdio.h>
int max(int a,int b,int c,int d){
    if(a>b&&a>c&&a>d){
        printf("a is greater\n");
     
    }   
    else if(b>c&&b>d){
        printf("b is greater\n");

    }
    else if(c>d){
        printf("c is greater\n");

    }
    else {
        printf("d is greater\n");

    }
}
int main()
{
     max(12,22,4,5);
}