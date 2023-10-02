#include <iostream>
using namespace std;

/*
    In this algorithm, 

    traverse from left and compare adjacent elements and the higher one is placed at right side. 
    In this way, the largest element is moved to the rightmost end at first. 
    This process is then continued to find the second largest and place it and so on until the data is sorted.
    
    Complexity Analysis of Bubble Sort:
        Time Complexity: O(N2)
        Auxiliary Space: O(1)
*/

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}