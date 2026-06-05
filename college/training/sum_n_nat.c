#include<stdio.h>
int sum(int a){
    if(a==0){
        return 0;
    }
    return sum(a-1)+a;
}

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("Sum of n naturl numbers: %d",sum(n));
    return 0;
}
