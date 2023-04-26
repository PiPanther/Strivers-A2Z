#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size)
{
    int i=0;
    cout<<endl;
    for(i;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void selectionSort(int arr[], int size)
{
    for(int i=0;i<size-1;i++){
        int minIndex = i;
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[minIndex])
            minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[] = {9,5,3,6,7,1};
    selectionSort(arr,6);

    printArray(arr, 6);
    return 0;
}
