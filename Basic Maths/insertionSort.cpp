#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    cout<<" "<< arr[i];
    cout<< endl;
}

void selectionSort(int arr[], int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        int j=i;
        while(arr[j]<arr[j-1] && j>0)
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main()
{
    int arr[] = {9,8,7,6,5,4};
    int size = 6;
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}