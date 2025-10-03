#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        int key=arr[i];
        int j=i-1;
        while (j>=0&&arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] =key;
    }
}
int main() {
    int arr[] = {1,3,5,7,2,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i] <<" ";
    }
    insertionSort(arr, n);
    cout<<"\nSorted array: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i] <<" ";
    }
    return 0;}
/*OUTPUT
riginal array: 1 3 5 7 2 9 4 
Sorted array: 1 2 3 4 5 7 9 */