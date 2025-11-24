#include<iostream>
using namespace std;

void selectionSort(int arr[], int n, int index = 0){
     
    if(index== n-1)
    return;

    int minIndex = index;

    for(int j = index+1; j<n; j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
    }
    swap(arr[index], arr[minIndex]);

    selectionSort(arr, n, index+1);
}
int main() {
    int arr[] = {3,5,6,2,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout <<"Sorted Array: ";

    for(int i = 0; i < n; i++)
        cout <<arr[i] <<" ";

    return 0;
    
}