#include <iostream>
using namespace std;

void reverse(int arr[], int end) {
    int start = 0;
    end = end-1;
    

    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;end--;

    }

}
void print_array(int arr[], int end) {
    
    for(int i = 0;i<end;i++)
    {
        cout<<arr[i]<< endl;
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6};
     
    reverse(arr,6);
    print_array(arr,6);
  
    return 0;

}