#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<< " " << arr[i];
    }
    cout<<endl;
}

void bubbleSort(int arr[], int size)
{
    int i,j;
    for(i=size-1;i>=0;i--)
    {
        for(j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }
}

int main() {
    int arr[] = {9,8,7,6,5,43,2,1};
    int size = 8;
    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}

// [9,8,7,6,5,4]