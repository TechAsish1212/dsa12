#include<stdio.h>
int sumOfDigits(int num) {
    
    if (num == 0) {
        return 0;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("Sum of n naturl numbers: %d",sumOfDigits(n));
    return 0;
}
