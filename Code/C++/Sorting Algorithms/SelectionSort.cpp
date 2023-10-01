#include<iostream>
using namespace std;

void swap (int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

/*
    Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest)
     element from the unsorted portion of the list and moving it to the sorted portion of the list. 
     Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

        One loop to select an element of Array one by one = O(N)
        Another loop to compare that element with every other Array element = O(N)
        Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)
*/


void selectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int smallest = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(&arr[i],&arr[smallest]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}