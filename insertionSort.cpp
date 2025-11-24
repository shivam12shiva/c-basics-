#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){

    if(n <= 1)
        return;
    
    insertionSort(arr, n-1);
    int last = arr[n-1];
    
    int j;
    for( j = n-2; j >= 0 && arr[j] > last; j--){
        arr[j+1] = arr[j];
    }
    arr[j+1] = last;
}
int main() {

    int arr[] = {3,2,5,4,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout <<"Sorted Array: ";

    for(int i = 0; i <= n; i++){
        cout <<arr[i] <<" ";
    }
    cout <<endl;

    return 0;
}