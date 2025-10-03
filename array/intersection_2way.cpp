#include <iostream>
using namespace std;

int findIntersection(int arr1[], int size1, int arr2[], int size2,int res[])
{
    int i=0,j=0, k=0;
    while(i<size1&&j<size2){
        if(arr1[i]==arr2[j]){
            res[k++]=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return k;
}

// print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size1, size2;
    cout << "Enter the size of frist Array:: ";
    cin >> size1;
    int arr1[100], arr2[100],res[100];
    cout << "Enter the all element of frist array:: " << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of frist Array:: ";
    cin >> size2;
    cout << "Enter the all element of second array:: " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Print frist Array::--->" << endl;
    printArray(arr1, size1);
    cout << "Print second Array::--->" << endl;
    printArray(arr2, size2);

    int op = findIntersection(arr1, size1, arr2, size2,res);
    cout<<"Intersection value::--->"<<endl;
    printArray(res,op);

    return 0;
}