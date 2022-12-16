//1

#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    int mult;
    int n3 = num % 10;
    int n1 = num / 100;
    int n2 = (num / 10)%10;
    mult = n1 * n2 * n3;

    if(num%3==0){
        printf("%d => да", mult);
    }

    else{
        printf("%d => нет", mult);
    }

    return 0;
}