// Selection sort: place the minimum element at start by swapping

#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i= 0;i<n -1;i++){
        int least = i;
        for(int j = i+1;j <n;j++){
            if(arr[least]>arr[j]){
                least = j;
            }
        }
        swap(arr[i],arr[least]);
    }
}



int main(){
    int arr[] = {0,9,4,3,1};
    int n = 5;
    selectionSort(arr,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}

// Time Complexity in Worst Case: O(n^2)