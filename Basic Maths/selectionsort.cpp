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

void selectionSort(int arr[], int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        int minIndex = i;
        for(int j = i;j<size;j++)
        {   
            if(arr[j]<=arr[minIndex])
            minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {4,5,9,7,2,6,4};
    int size = 7;
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}


// [2,5,9,1,4,6]