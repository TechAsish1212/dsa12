#include<stdio.h>

int main(){
    int n,target;
    printf("enter the number of line: ");
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter target number:");
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("[%d %d]",arr[i],arr[j]);
            }
        }
    }
return 0;
}