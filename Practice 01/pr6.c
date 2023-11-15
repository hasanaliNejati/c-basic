#include <stdio.h>

int main (){
    int output = 0;
    while(1==1){
        int input;
        scanf("%d",&input);
        if(input < 0)
            break;
        if(input > output)
            output = input;
    }
    printf ("the biggest number is %d",output);
}