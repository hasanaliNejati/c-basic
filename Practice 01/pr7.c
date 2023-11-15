#include <stdio.h>


int main(){
    int input;
    scanf("%d",&input);
    int output;
    while (input > 0)
    {
        input /= 10;
        output++;
    }
    printf("%d",output);
}