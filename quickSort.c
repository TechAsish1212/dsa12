#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void QuickSort(int arr[],int low,int high)
{
    // int pi;
    // Base case
    if(low<high)
    {
        int pi=partition(arr,low,high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
    }
}

int main(){
    int num;
    printf("Enter the number of elements:: ");
    scanf("%d",&num);

    int arr[num];

    printf("Enter the all arrays element:: \n");
    for(int i=0;i<num;i++)
        scanf("%d",&arr[i]);
    
    QuickSort(arr,0,num-1);

    printf("Sorted Arrays::-->\n");
    for(int i=0;i<num;i++)
        printf("%d ",arr[i]);
return 0;
}