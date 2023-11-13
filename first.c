#include <stdio.h>
#include <stdbool.h>

int main(){

    while (true)
    {
        /* code */
    
    int input;
    scanf("%d",&input);
    if(reverce(input) == input)
    {
        printf("Its palindrom");
    }else
    {
        printf("It's not palindrom");
    }

    }
    
    return 0;
}

int reverce(int p){

    int pal = 0;

    while(p > 0)
    {
        int x = p % 10;
        p = p /10;
        pal *= 10;
        pal += x;
    }
    return pal;

}