#include <iostream>
using namespace std;

/*
    Algorithm explanation and steps of partition function: 
    Make a new array of size equal to given array.
    push all the smaller elements than pivotElement to the new array.
    Push pivotElement to new array now.
    finally, push all the greater elements than pivotElement to the new array.
    Now, copy the new array to the original array.
    Store the index of the pivotElement from the original array. Return this index.
    After this, all the elements in the original array are in the order : smaller than pivotElement -> pivotElement -> greater than pivotElement.

    Time Complexity : θ(nlogn).

    Space Complexity : O(n).
*/

void Swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int Partition(int arr[], int l, int h){
    int i = l;
    int j = h;
    int pivot = arr[l];
    while(i<j){
        while(arr[i]<=pivot){i++;}
        while(arr[j]>pivot){j--;}
        if(i<j){
            Swap(arr, i, j);
        }
    }
    Swap(arr, j, l);
    return j;
}

void QuickSort(int arr[], int l, int h){
    if(l<h){
        int pivot = Partition(arr, l, h);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,h);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}