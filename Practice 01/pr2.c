#include <stdio.h>

int main(){
    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int output = a;

    if(b > output)
        output = b;
    if(c > output)
        output = c;

    printf ("the bigest number is %d" , output);
}