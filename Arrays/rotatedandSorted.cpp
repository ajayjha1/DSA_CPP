// Search in a rotated and sorted array

#include <iostream>

using namespace std;

int binarySearch(int arr[],int start, int end, int k){
    int s = start;
    int  e = end;
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(arr[mid]>=k){
            e = mid - 1;
        } else if(arr[mid] < k){
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return mid;
}

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        } else {
            e = mid;
        }
        
        mid = s + (e-s)/2;
    }
    return s;
}

int main() {
    // Write C++ code here
    int arr[5] = {12,14,1,6,10};
    int n = 5;
    int k = 1;
    int pivot = getPivot(arr, n);
    
     if(k >= arr[pivot] && k <= arr[n-1]){
        cout<<"k is at "<<binarySearch(arr, pivot, n-1, k);
        return 0;
    } else{
        cout <<"k is at"<< binarySearch(arr, 0, pivot - 1, k);
        return 0;
    }
    
    return 0;
}